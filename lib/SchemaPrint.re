open Ast_404;
open Parsetree;
open Ast_helper;
open Schema;

type state = {
  mutable enums: list(type_declaration),
  mutable unions: list(type_declaration),
  mutable unions_helpers: list(structure_item),
  mutable scalars: list(signature_item),
  mutable interfaces: list(type_declaration),
  mutable inputs: list(type_declaration),
  mutable fields: list(type_declaration),
  mutable directives: list(label_declaration),
  mutable queries: list(label_declaration),
  mutable mutations: list(label_declaration),
  mutable subscriptions: list(label_declaration),
};

let uncap = String.uncapitalize_ascii;

let uncap_key =
  fun
  | "ID" => "id"
  | "JSON" => "json"
  | s => uncap(s);

let closed_js_t = fields =>
  Typ.constr(
    {txt: Longident.parse("Js.t"), loc: Location.none},
    [Typ.object_(fields, Closed)],
  );

let gql_type = key =>
  switch (String.lowercase_ascii(key)) {
  | "id" => [%type: string]
  | "int" => [%type: int]
  | "boolean" => [%type: bool]
  | "float" => [%type: float]
  | "string" => [%type: string]
  | _ =>
    Typ.constr(
      {txt: Longident.Lident(uncap_key(key)), loc: Location.none},
      [],
    )
  };

let abstractRecord = (name, labels) =>
  Type.mk(
    ~kind=Ptype_record(labels),
    ~attrs=[
      ({txt: "bs.deriving", loc: Location.none}, PStr([%str abstract])),
    ],
    {Location.txt: name, loc: Location.none},
  );

let enum = (name, strings) =>
  Type.mk(
    ~kind=Ptype_abstract,
    ~attrs=[
      (
        {txt: "bs.deriving", loc: Location.none},
        PStr([%str {jsConverter: newType}]),
      ),
    ],
    ~manifest=
      Typ.variant(
        List.map(
          name =>
            Rtag(
              name,
              [
                (
                  {txt: "bs.as", loc: Location.none},
                  PStr([%str [%e Exp.constant(Const.string(name))]]),
                ),
              ],
              true,
              [],
            ),
          strings,
        ),
        Closed,
        None,
      ),
    {Location.txt: name, loc: Location.none},
  );

let print = schema => {
  let state = {
    enums: [],
    unions: [],
    unions_helpers: [],
    scalars: [],
    interfaces: [],
    inputs: [],
    fields: [],
    directives: [],
    queries: [],
    mutations: [],
    subscriptions: [],
  };

  let uncap_key_resolver = s =>
    switch (Schema.lookup_type(schema, s)) {
    | Some(Enum(_)) => "abs_" ++ uncap_key(s)
    | None => uncap(s)
    | Some(Scalar(_))
    | Some(Object(_))
    | Some(Interface(_))
    | Some(Union(_))
    | Some(InputObject(_)) => uncap_key(s)
    };

  let rec print_type_ref_nonNullable = (~uncap_key=uncap_key, tm) =>
    switch (tm) {
    | Named(name) => uncap_key(name) |> gql_type
    | NonNull(tr) => print_type_ref_nonNullable(~uncap_key, tr)
    | List(tr) => [%type: array([%t print_type_ref(~uncap_key, tr)])]
    }
  and print_type_ref = (~uncap_key=uncap_key, tm) =>
    switch (tm) {
    | Named(name) => [%type:
        Js.Nullable.t([%t name |> uncap_key |> gql_type])
      ]
    | NonNull(tr) => print_type_ref_nonNullable(~uncap_key, tr)
    | List(tr) => [%type: Js.Nullable.t(array([%t print_type_ref(~uncap_key, tr)]))]
    };

  let rec print_field_type_name = (~uncap_key=uncap_key, tm) =>
    switch (tm) {
    | Named(name) => name |> uncap_key |> gql_type
    | NonNull(tr)
    | List(tr) => print_field_type_name(~uncap_key, tr)
    };

  let rec print_fields = (name, fields) =>
    Type.mk(
      ~manifest=closed_js_t(List.map(print_field, fields)),
      {Location.txt: uncap_key(name), loc: Location.none},
    )
  and print_field =
      (
        {
          fm_name,
          fm_description,
          fm_arguments,
          fm_field_type,
          fm_deprecation_reason,
        },
      ) => (
    fm_name,
    [],
    print_type_ref(fm_field_type),
  )
  and print_resolver = (name, fields) =>
    List.map(
      (
        {
          fm_name,
          fm_description,
          fm_arguments,
          fm_field_type,
          fm_deprecation_reason,
        },
      ) =>
        Type.field(
          ~attrs=[({txt: "bs.optional", loc: Location.none}, PStr([]))],
          {Location.txt: uncap_key(fm_name), loc: Location.none},
          Typ.constr(
            {txt: Longident.parse("resolver"), loc: Location.none},
            [
              switch (fm_arguments) {
              | [] => [%type: unit]
              | _ => closed_js_t(List.map(print_arg, fm_arguments))
              },
              print_field_type_name(fm_field_type),
              print_type_ref(fm_field_type),
            ],
          ),
        ),
      fields,
    )
  and print_directive_resolver = ({dm_name, dm_arguments, _}) => {
    let (key, extraAttrs) =
      switch (uncap_key(dm_name)) {
      | "include" as originalKey => (
          originalKey ++ "_",
          [
            (
              {Location.txt: "bs.as", loc: Location.none},
              PStr([%str [%e Exp.constant(Const.string(originalKey))]]),
            ),
          ],
        )
      | originalKey => (originalKey, [])
      };
    [
      Type.field(
        ~attrs=[
          ({txt: "bs.optional", loc: Location.none}, PStr([])),
          ...extraAttrs,
        ],
        {Location.txt: key, loc: Location.none},
        Typ.constr(
          {txt: Longident.parse("directiveResolver"), loc: Location.none},
          [
            switch (dm_arguments) {
            | [] => [%type: unit]
            | _ => closed_js_t(List.map(print_arg, dm_arguments))
            },
          ],
        ),
      ),
    ];
  }
  and print_scalar = ({sm_name, sm_description}) =>
    switch (sm_name) {
    | "String"
    | "Float"
    | "Boolean"
    | "Int" => None
    | name =>
      Some(
        Sig.type_(
          Recursive,
          [Type.mk({Location.txt: uncap_key(name), loc: Location.none})],
        ),
      )
    }
  and print_enum = ({em_name, em_description, em_values}) =>
    switch (em_name) {
    | isPrivate when String.sub(isPrivate, 0, 2) == "__" => None
    | em_name =>
      let name = uncap_key(em_name);
      Some(enum(name, List.map(({evm_name, _}) => evm_name, em_values)));
    }
  and print_union = ({um_name, um_of_types, _}) =>
    Type.mk({Location.txt: uncap_key(um_name), loc: Location.none})
  and print_union_runtime = ({um_name, um_of_types, _}) => {
    let unionName = uncap_key(um_name);
    let suffix = "To" ++ (unionName |> String.capitalize_ascii);

    List.map(
      t => {
        let unionType = uncap_key(t);
        let arrowType =
          Typ.arrow(
            Nolabel,
            Typ.constr(
              {txt: Longident.Lident(unionType), loc: Location.none},
              [],
            ),
            Typ.constr(
              {txt: Longident.Lident(unionName), loc: Location.none},
              [],
            ),
          );
        Str.primitive(
          Val.mk(
            ~prim=["%identity"],
            {txt: unionType ++ suffix, loc: Location.none},
            arrowType,
          ),
        );
      },
      um_of_types,
    );
  }
  and print_interface = ({im_name, im_description, im_fields}) =>
    Type.mk(
      ~manifest=closed_js_t(List.map(print_field, im_fields)),
      {Location.txt: uncap_key(im_name), loc: Location.none},
    )
  and print_input = ({iom_name, iom_description, iom_input_fields}) =>
    print_args(iom_name, iom_input_fields)
  and print_arg = ({am_name, am_description, am_arg_type}) => (
    am_name,
    [],
    print_type_ref(~uncap_key=uncap_key_resolver, am_arg_type),
  )
  and print_args = (name, args) =>
    Type.mk(
      ~manifest=closed_js_t(List.map(print_arg, args)),
      {Location.txt: uncap_key(name), loc: Location.none},
    );

  Hashtbl.iter(
    (key, type_meta) =>
      switch (type_meta) {
      | Object({om_name, om_fields, _}) =>
        switch (String.lowercase_ascii(om_name)) {
        | isPrivate when String.sub(isPrivate, 0, 2) == "__" => ()
        | name =>
          state.fields = [print_fields(om_name, om_fields), ...state.fields];
          switch (name) {
          | "mutation" =>
            state.mutations =
              List.append(
                state.mutations,
                print_resolver(om_name, om_fields),
              )
          | "query" =>
            state.queries =
              List.append(state.queries, print_resolver(om_name, om_fields))
          | "subscription" =>
            state.subscriptions =
              List.append(
                state.subscriptions,
                print_resolver(om_name, om_fields),
              )
          | _ => ()
          };
        }

      | Scalar(sm) =>
        switch (print_scalar(sm)) {
        | Some(td) => state.scalars = [td, ...state.scalars]
        | None => ()
        }
      | Enum(em) =>
        switch (print_enum(em)) {
        | Some(td) => state.enums = [td, ...state.enums]
        | None => ()
        }
      | Interface(im) =>
        state.interfaces = [print_interface(im), ...state.interfaces]
      | Union(um) =>
        state.unions_helpers =
          List.append(print_union_runtime(um), state.unions_helpers);
        state.unions = [print_union(um), ...state.unions];
      | InputObject(iom) =>
        state.inputs = [print_input(iom), ...state.inputs]
      },
    schema.type_map,
  );

  Hashtbl.iter(
    (key, dm) =>
      state.directives =
        List.append(state.directives, print_directive_resolver(dm)),
    schema.directive_map,
  );

  let enums =
    switch (state.enums) {
    | [] => [%str]
    | enums => [%str
        %s
        List.map(enum => Str.type_(Recursive, [enum]), state.enums)
      ]
    };

  let inputs =
    switch (state.inputs) {
    | [] => [%str]
    | inputs => [%str
        %s
        [Str.type_(Recursive, state.inputs)]
      ]
    };
  let fields =
    switch (state.fields) {
    | [] => [%str]
    | fields => [%str
        %s
        [
          Str.type_(
            Recursive,
            List.flatten([state.unions, state.interfaces, state.fields]),
          ),
        ]
      ]
    };

  let queries =
    switch (state.queries) {
    | [] => [%str]
    | queries => [%str
        %s
        [Str.type_(Recursive, [abstractRecord("t", state.queries)])]
      ]
    };

  let mutations =
    switch (state.mutations) {
    | [] => [%str]
    | mutations => [%str
        %s
        [Str.type_(Recursive, [abstractRecord("t", state.mutations)])]
      ]
    };

  let subscriptions =
    switch (state.subscriptions) {
    | [] => [%str]
    | subscriptions => [%str
        %s
        [Str.type_(Recursive, [abstractRecord("t", state.subscriptions)])]
      ]
    };
  let directives =
    switch (state.directives) {
    | [] => [%str]
    | directives => [%str
        %s
        [Str.type_(Recursive, [abstractRecord("t", state.directives)])]
      ]
    };

  let code = [%str
    module type SchemaConfig = {
      module Scalars: {[%%s state.scalars];};
      type resolver('payload, 'fieldType, 'result);
      type directiveResolver('payload);
    };
    module MakeSchema = (Config: SchemaConfig) => {
      include Config.Scalars;

      type resolver('payload, 'fieldType, 'result) =
        Config.resolver('payload, 'fieldType, 'result);
      type directiveResolver('payload) = Config.directiveResolver('payload);

      %s
      enums;
      %s
      inputs;
      %s
      fields;
      %s
      state.unions_helpers;

      module Queries = {
        %s
        queries;
      };
      module Mutations = {
        %s
        mutations;
      };
      module Subscriptions = {
        %s
        subscriptions;
      };
      module Directives = {
        %s
        directives;
      };
    }
  ];
  let comments = [];

  (code, comments);
};

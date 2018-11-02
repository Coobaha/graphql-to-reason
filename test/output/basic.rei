module type SchemaConfig = {
  module Scalars: {type id; type customScalar;};
  type resolver('payload, 'fieldType, 'result);
  type directiveResolver('payload);
};
module MakeSchema:
  (Config: SchemaConfig) =>
  {
    type id = Config.Scalars.id;
    type customScalar = Config.Scalars.customScalar;
    type resolver('payload, 'fieldType, 'result) =
      Config.resolver('payload, 'fieldType, 'result);
    type directiveResolver('payload) = Config.directiveResolver('payload);
    type sampleField = [ | `FIRST | `SECOND | `THIRD];
    type abs_sampleField;
    let sampleFieldToJs: sampleField => abs_sampleField;
    let sampleFieldFromJs: abs_sampleField => sampleField;
    type nonrecursiveInput = {
      .
      "enum": Js.Nullable.t(abs_sampleField),
      "field": Js.Nullable.t(string),
    }
    and listsInput = {
      .
      "nonNullableOfNonNullable": array(string),
      "nonNullableOfNullable": array(Js.Nullable.t(string)),
      "nullableOfNonNullable": Js.Nullable.t(array(string)),
      "nullableOfNullable": Js.Nullable.t(array(Js.Nullable.t(string))),
    }
    and variousScalarsInput = {
      .
      "boolean": bool,
      "float": float,
      "id": string,
      "int": int,
      "nullableBoolean": Js.Nullable.t(bool),
      "nullableFloat": Js.Nullable.t(float),
      "nullableID": Js.Nullable.t(string),
      "nullableInt": Js.Nullable.t(int),
      "nullableString": Js.Nullable.t(string),
      "string": string,
    }
    and recursiveInput = {
      .
      "enum": Js.Nullable.t(abs_sampleField),
      "inner": Js.Nullable.t(recursiveInput),
      "otherField": Js.Nullable.t(string),
    };
    type dogOrHuman
    and sampleError = {
      .
      "field": sampleField,
      "message": string,
    }
    and nestedObject = {
      .
      "field": string,
      "inner": Js.Nullable.t(nestedObject),
    }
    and variousScalars = {
      .
      "boolean": bool,
      "float": float,
      "id": string,
      "int": int,
      "nullableBoolean": Js.Nullable.t(bool),
      "nullableFloat": Js.Nullable.t(float),
      "nullableID": Js.Nullable.t(string),
      "nullableInt": Js.Nullable.t(int),
      "nullableString": Js.Nullable.t(string),
      "string": string,
    }
    and query = {
      .
      "argNamedQuery": int,
      "customScalarField": customScalarObject,
      "dogOrHuman": dogOrHuman,
      "enumInput": string,
      "lists": lists,
      "listsInput": string,
      "nestedObject": nestedObject,
      "nonrecursiveInput": string,
      "recursiveInput": string,
      "scalarsInput": string,
      "stringField": string,
      "variousScalars": variousScalars,
    }
    and mutationWithErrorResult = {
      .
      "errors": Js.Nullable.t(array(sampleError)),
      "value": Js.Nullable.t(sampleResult),
    }
    and dog = {
      .
      "barkVolume": float,
      "name": string,
    }
    and human = {. "name": string}
    and withArgField = {. "argField": Js.Nullable.t(nestedObject)}
    and subscription = {
      .
      "simpleNullableSubscription": Js.Nullable.t(dogOrHuman),
      "simpleSubscription": dogOrHuman,
    }
    and lists = {
      .
      "nonNullableOfNonNullable": array(string),
      "nonNullableOfNullable": array(Js.Nullable.t(string)),
      "nullableOfNonNullable": Js.Nullable.t(array(string)),
      "nullableOfNullable": Js.Nullable.t(array(Js.Nullable.t(string))),
    }
    and sampleResult = {. "stringField": string}
    and customScalarObject = {
      .
      "nonNullable": customScalar,
      "nullable": Js.Nullable.t(customScalar),
    }
    and mutation = {. "mutationWithError": mutationWithErrorResult};
    external dogToDogOrHuman : dog => dogOrHuman = "%identity";
    external humanToDogOrHuman : human => dogOrHuman = "%identity";
    module Queries: {
      [@bs.deriving abstract]
      type t = {
        [@bs.optional]
        stringField: resolver(unit, string, string),
        [@bs.optional]
        variousScalars: resolver(unit, variousScalars, variousScalars),
        [@bs.optional]
        lists: resolver(unit, lists, lists),
        [@bs.optional]
        scalarsInput:
          resolver({. "arg": variousScalarsInput}, string, string),
        [@bs.optional]
        listsInput: resolver({. "arg": listsInput}, string, string),
        [@bs.optional]
        recursiveInput: resolver({. "arg": recursiveInput}, string, string),
        [@bs.optional]
        nonrecursiveInput:
          resolver({. "arg": nonrecursiveInput}, string, string),
        [@bs.optional]
        enumInput: resolver({. "arg": abs_sampleField}, string, string),
        [@bs.optional]
        argNamedQuery: resolver({. "query": int}, int, int),
        [@bs.optional]
        customScalarField:
          resolver(
            {
              .
              "argOptional": Js.Nullable.t(customScalar),
              "argRequired": customScalar,
            },
            customScalarObject,
            customScalarObject,
          ),
        [@bs.optional]
        dogOrHuman: resolver(unit, dogOrHuman, dogOrHuman),
        [@bs.optional]
        nestedObject: resolver(unit, nestedObject, nestedObject),
      };
    };
    module Mutations: {
      [@bs.deriving abstract]
      type t = {
        [@bs.optional]
        mutationWithError:
          resolver(unit, mutationWithErrorResult, mutationWithErrorResult),
      };
    };
    module Subscriptions: {
      [@bs.deriving abstract]
      type t = {
        [@bs.optional]
        simpleSubscription: resolver(unit, dogOrHuman, dogOrHuman),
        [@bs.optional]
        simpleNullableSubscription:
          resolver(unit, dogOrHuman, Js.Nullable.t(dogOrHuman)),
      };
    };
    module Directives: {
      [@bs.deriving abstract]
      type t = {
        [@bs.optional] [@bs.as "include"]
        include_: directiveResolver({. "if": bool}),
        [@bs.optional]
        skip: directiveResolver({. "if": bool}),
        [@bs.optional]
        deprecated: directiveResolver({. "reason": Js.Nullable.t(string)}),
      };
    };
  };

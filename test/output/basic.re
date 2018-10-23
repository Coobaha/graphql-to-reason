module type SchemaConfig = {
  module Scalars: {
    type id;
    type customScalar;
  };
  type resolver('payload, 'fieldType, 'result);
  type directiveResolver('payload);
};
module MakeSchema = (Config: SchemaConfig) => {
  include Config.Scalars;
  type resolver('payload, 'fieldType, 'result) =
    Config.resolver('payload, 'fieldType, 'result);
  type directiveResolver('payload) = Config.directiveResolver('payload);
  [@bs.deriving {jsConverter: newType}]
  type sampleField = [
    | [@bs.as "FIRST"] `FIRST
    | [@bs.as "SECOND"] `SECOND
    | [@bs.as "THIRD"] `THIRD
  ];
  type nonrecursiveInput = {
    .
    "field": Js.Nullable.t(string),
    "enum": Js.Nullable.t(abs_sampleField),
  }
  and listsInput = {
    .
    "nullableOfNullable": Js.Nullable.t(array(Js.Nullable.t(string))),
    "nullableOfNonNullable": Js.Nullable.t(array(string)),
    "nonNullableOfNullable": array(Js.Nullable.t(string)),
    "nonNullableOfNonNullable": array(string),
  }
  and variousScalarsInput = {
    .
    "nullableString": Js.Nullable.t(string),
    "string": string,
    "nullableInt": Js.Nullable.t(int),
    "int": int,
    "nullableFloat": Js.Nullable.t(float),
    "float": float,
    "nullableBoolean": Js.Nullable.t(bool),
    "boolean": bool,
    "nullableID": Js.Nullable.t(string),
    "id": string,
  }
  and recursiveInput = {
    .
    "otherField": Js.Nullable.t(string),
    "inner": Js.Nullable.t(recursiveInput),
    "enum": Js.Nullable.t(abs_sampleField),
  };
  type dogOrHuman
  and sampleError = {
    .
    "__typename": string,
    "field": sampleField,
    "message": string,
  }
  and nestedObject = {
    .
    "__typename": string,
    "inner": Js.Nullable.t(nestedObject),
    "field": string,
  }
  and variousScalars = {
    .
    "__typename": string,
    "nullableString": Js.Nullable.t(string),
    "string": string,
    "nullableInt": Js.Nullable.t(int),
    "int": int,
    "nullableFloat": Js.Nullable.t(float),
    "float": float,
    "nullableBoolean": Js.Nullable.t(bool),
    "boolean": bool,
    "nullableID": Js.Nullable.t(string),
    "id": string,
  }
  and query = {
    .
    "__typename": string,
    "stringField": string,
    "variousScalars": variousScalars,
    "lists": lists,
    "scalarsInput": string,
    "listsInput": string,
    "recursiveInput": string,
    "nonrecursiveInput": string,
    "enumInput": string,
    "argNamedQuery": int,
    "customScalarField": customScalarObject,
    "dogOrHuman": dogOrHuman,
    "nestedObject": nestedObject,
  }
  and mutationWithErrorResult = {
    .
    "__typename": string,
    "value": Js.Nullable.t(sampleResult),
    "errors": Js.Nullable.t(array(sampleError)),
  }
  and dog = {
    .
    "__typename": string,
    "name": string,
    "barkVolume": float,
  }
  and human = {
    .
    "__typename": string,
    "name": string,
  }
  and withArgField = {
    .
    "__typename": string,
    "argField": Js.Nullable.t(nestedObject),
  }
  and subscription = {
    .
    "__typename": string,
    "simpleSubscription": dogOrHuman,
    "simpleNullableSubscription": Js.Nullable.t(dogOrHuman),
  }
  and lists = {
    .
    "__typename": string,
    "nullableOfNullable": Js.Nullable.t(array(Js.Nullable.t(string))),
    "nullableOfNonNullable": Js.Nullable.t(array(string)),
    "nonNullableOfNullable": array(Js.Nullable.t(string)),
    "nonNullableOfNonNullable": array(string),
  }
  and sampleResult = {
    .
    "__typename": string,
    "stringField": string,
  }
  and customScalarObject = {
    .
    "__typename": string,
    "nullable": Js.Nullable.t(customScalar),
    "nonNullable": customScalar,
  }
  and mutation = {
    .
    "__typename": string,
    "mutationWithError": mutationWithErrorResult,
  };
  external dogToDogOrHuman: dog => dogOrHuman = "%identity";
  external humanToDogOrHuman: human => dogOrHuman = "%identity";
  module Queries = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      __typename: resolver(unit, string, string),
      [@bs.optional]
      stringField: resolver(unit, string, string),
      [@bs.optional]
      variousScalars: resolver(unit, variousScalars, variousScalars),
      [@bs.optional]
      lists: resolver(unit, lists, lists),
      [@bs.optional]
      scalarsInput: resolver({. "arg": variousScalarsInput}, string, string),
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
  module Mutations = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      __typename: resolver(unit, string, string),
      [@bs.optional]
      mutationWithError:
        resolver(unit, mutationWithErrorResult, mutationWithErrorResult),
    };
  };
  module Subscriptions = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      __typename: resolver(unit, string, string),
      [@bs.optional]
      simpleSubscription: resolver(unit, dogOrHuman, dogOrHuman),
      [@bs.optional]
      simpleNullableSubscription:
        resolver(unit, dogOrHuman, Js.Nullable.t(dogOrHuman)),
    };
  };
  module Directives = {
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

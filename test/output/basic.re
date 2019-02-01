module type SchemaConfig = {
  module Scalars: {
    type id;
    type customScalar;
  };
  type resolver('parent, 'payload, 'fieldType, 'result);
  type directiveResolver('payload);
};
module MakeSchema = (Config: SchemaConfig) => {
  include Config.Scalars;
  type rootResolver('payload, 'fieldType, 'result) =
    Config.resolver(unit, 'payload, 'fieldType, 'result);
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
    "field": sampleField,
    "message": string,
  }
  and nestedObject = {
    .
    "inner": Js.Nullable.t(nestedObject),
    "field": string,
  }
  and variousScalars = {
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
  and query = {
    .
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
    "value": Js.Nullable.t(sampleResult),
    "errors": Js.Nullable.t(array(sampleError)),
  }
  and dog = {
    .
    "name": string,
    "barkVolume": float,
  }
  and human = {
    .
    "name": string,
    "Name": string,
  }
  and withArgField = {. "argField": Js.Nullable.t(nestedObject)}
  and subscription = {
    .
    "simpleSubscription": dogOrHuman,
    "simpleNullableSubscription": Js.Nullable.t(dogOrHuman),
  }
  and lists = {
    .
    "nullableOfNullable": Js.Nullable.t(array(Js.Nullable.t(string))),
    "nullableOfNonNullable": Js.Nullable.t(array(string)),
    "nonNullableOfNullable": array(Js.Nullable.t(string)),
    "nonNullableOfNonNullable": array(string),
  }
  and sampleResult = {. "stringField": string}
  and customScalarObject = {
    .
    "nullable": Js.Nullable.t(customScalar),
    "nonNullable": customScalar,
  }
  and mutation = {. "mutationWithError": mutationWithErrorResult};
  external dogToDogOrHuman: dog => dogOrHuman = "%identity";
  external humanToDogOrHuman: human => dogOrHuman = "%identity";
  module Query = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      stringField: rootResolver(unit, string, string),
      [@bs.optional]
      variousScalars: rootResolver(unit, variousScalars, variousScalars),
      [@bs.optional]
      lists: rootResolver(unit, lists, lists),
      [@bs.optional]
      scalarsInput:
        rootResolver({. "arg": variousScalarsInput}, string, string),
      [@bs.optional]
      listsInput: rootResolver({. "arg": listsInput}, string, string),
      [@bs.optional]
      recursiveInput:
        rootResolver({. "arg": recursiveInput}, string, string),
      [@bs.optional]
      nonrecursiveInput:
        rootResolver({. "arg": nonrecursiveInput}, string, string),
      [@bs.optional]
      enumInput: rootResolver({. "arg": abs_sampleField}, string, string),
      [@bs.optional]
      argNamedQuery: rootResolver({. "query": int}, int, int),
      [@bs.optional]
      customScalarField:
        rootResolver(
          {
            .
            "argOptional": Js.Nullable.t(customScalar),
            "argRequired": customScalar,
          },
          customScalarObject,
          customScalarObject,
        ),
      [@bs.optional]
      dogOrHuman: rootResolver(unit, dogOrHuman, dogOrHuman),
      [@bs.optional]
      nestedObject: rootResolver(unit, nestedObject, nestedObject),
    };
  };
  module Mutation = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      mutationWithError:
        rootResolver(unit, mutationWithErrorResult, mutationWithErrorResult),
    };
  };
  module Subscription = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      simpleSubscription: rootResolver(unit, dogOrHuman, dogOrHuman),
      [@bs.optional]
      simpleNullableSubscription:
        rootResolver(unit, dogOrHuman, Js.Nullable.t(dogOrHuman)),
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
  module CustomScalarObject = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      nullable:
        Config.resolver(
          customScalarObject,
          unit,
          customScalar,
          Js.Nullable.t(customScalar),
        ),
      [@bs.optional]
      nonNullable:
        Config.resolver(customScalarObject, unit, customScalar, customScalar),
    };
  };
  module SampleResult = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      stringField: Config.resolver(sampleResult, unit, string, string),
    };
  };
  module Lists = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      nullableOfNullable:
        Config.resolver(
          lists,
          unit,
          string,
          Js.Nullable.t(array(Js.Nullable.t(string))),
        ),
      [@bs.optional]
      nullableOfNonNullable:
        Config.resolver(lists, unit, string, Js.Nullable.t(array(string))),
      [@bs.optional]
      nonNullableOfNullable:
        Config.resolver(lists, unit, string, array(Js.Nullable.t(string))),
      [@bs.optional]
      nonNullableOfNonNullable:
        Config.resolver(lists, unit, string, array(string)),
    };
  };
  module WithArgField = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      argField:
        Config.resolver(
          withArgField,
          {
            .
            "arg1": Js.Nullable.t(string),
            "arg2": Js.Nullable.t(int),
          },
          nestedObject,
          Js.Nullable.t(nestedObject),
        ),
    };
  };
  module Human = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      name: Config.resolver(human, unit, string, string),
      [@bs.optional] [@bs.as "Name"]
      name_1: Config.resolver(human, unit, string, string),
    };
  };
  module Dog = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      name: Config.resolver(dog, unit, string, string),
      [@bs.optional]
      barkVolume: Config.resolver(dog, unit, float, float),
    };
  };
  module MutationWithErrorResult = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      value:
        Config.resolver(
          mutationWithErrorResult,
          unit,
          sampleResult,
          Js.Nullable.t(sampleResult),
        ),
      [@bs.optional]
      errors:
        Config.resolver(
          mutationWithErrorResult,
          unit,
          sampleError,
          Js.Nullable.t(array(sampleError)),
        ),
    };
  };
  module VariousScalars = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      nullableString:
        Config.resolver(variousScalars, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      string: Config.resolver(variousScalars, unit, string, string),
      [@bs.optional]
      nullableInt:
        Config.resolver(variousScalars, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      int: Config.resolver(variousScalars, unit, int, int),
      [@bs.optional]
      nullableFloat:
        Config.resolver(variousScalars, unit, float, Js.Nullable.t(float)),
      [@bs.optional]
      float: Config.resolver(variousScalars, unit, float, float),
      [@bs.optional]
      nullableBoolean:
        Config.resolver(variousScalars, unit, bool, Js.Nullable.t(bool)),
      [@bs.optional]
      boolean: Config.resolver(variousScalars, unit, bool, bool),
      [@bs.optional]
      nullableID:
        Config.resolver(variousScalars, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      id: Config.resolver(variousScalars, unit, string, string),
    };
  };
  module NestedObject = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      inner:
        Config.resolver(
          nestedObject,
          unit,
          nestedObject,
          Js.Nullable.t(nestedObject),
        ),
      [@bs.optional]
      field: Config.resolver(nestedObject, unit, string, string),
    };
  };
  module SampleError = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      field: Config.resolver(sampleError, unit, sampleField, sampleField),
      [@bs.optional]
      message: Config.resolver(sampleError, unit, string, string),
    };
  };
  [@bs.deriving abstract]
  type t = {
    [@bs.optional] [@bs.as "Mutation"]
    mutation: Mutation.t,
    [@bs.optional] [@bs.as "CustomScalarObject"]
    customScalarObject: CustomScalarObject.t,
    [@bs.optional] [@bs.as "SampleResult"]
    sampleResult: SampleResult.t,
    [@bs.optional] [@bs.as "Lists"]
    lists: Lists.t,
    [@bs.optional] [@bs.as "Subscription"]
    subscription: Subscription.t,
    [@bs.optional] [@bs.as "WithArgField"]
    withArgField: WithArgField.t,
    [@bs.optional] [@bs.as "Human"]
    human: Human.t,
    [@bs.optional] [@bs.as "Dog"]
    dog: Dog.t,
    [@bs.optional] [@bs.as "MutationWithErrorResult"]
    mutationWithErrorResult: MutationWithErrorResult.t,
    [@bs.optional] [@bs.as "Query"]
    query: Query.t,
    [@bs.optional] [@bs.as "VariousScalars"]
    variousScalars: VariousScalars.t,
    [@bs.optional] [@bs.as "NestedObject"]
    nestedObject: NestedObject.t,
    [@bs.optional] [@bs.as "SampleError"]
    sampleError: SampleError.t,
  };
};

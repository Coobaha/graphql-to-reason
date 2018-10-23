module type SchemaConfig = {
  module Scalars: {};
  type resolver('payload, 'fieldType, 'result);
  type directiveResolver('payload);
};
module MakeSchema:
  (Config: SchemaConfig) =>
  {
    type resolver('payload, 'fieldType, 'result) =
      Config.resolver('payload, 'fieldType, 'result);
    type directiveResolver('payload) = Config.directiveResolver('payload);
    type mutation = {
      .
      "__typename": string,
      "nullableArrayOfNullableInts": array(Js.Nullable.t(int)),
    }
    and query = {
      .
      "__typename": string,
      "test": string,
    };
    module Queries: {
      [@bs.deriving abstract]
      type t = {
        [@bs.optional]
        __typename: resolver(unit, string, string),
        [@bs.optional]
        test: resolver(unit, string, string),
      };
    };
    module Mutations: {
      [@bs.deriving abstract]
      type t = {
        [@bs.optional]
        __typename: resolver(unit, string, string),
        [@bs.optional]
        nullableArrayOfNullableInts:
          resolver(
            unit,
            int,
            array(Js.Nullable.t(int)),
          ),
      };
    };
    module Subscriptions: {};
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

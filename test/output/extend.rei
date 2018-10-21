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
    type query = {
      .
      "__typename": string,
      "hello": Js.Nullable.t(string),
    };
    module Queries: {
      [@bs.deriving abstract]
      type t = {
        [@bs.optional]
        __typename: resolver(unit, string, string),
        [@bs.optional]
        hello: resolver(unit, string, Js.Nullable.t(string)),
      };
    };
    module Mutations: {};
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

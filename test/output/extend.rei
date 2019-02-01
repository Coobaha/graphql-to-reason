module type SchemaConfig = {
  module Scalars: {};
  type resolver('parent, 'payload, 'fieldType, 'result);
  type directiveResolver('payload);
};
module MakeSchema:
  (Config: SchemaConfig) =>
   {
    type rootResolver('payload, 'fieldType, 'result) =
      Config.resolver(unit, 'payload, 'fieldType, 'result);
    type directiveResolver('payload) = Config.directiveResolver('payload);
    type query = {
      .
      "hello": Js.Nullable.t(string),
      "test": Js.Nullable.t(string),
    };
    module Query: {
      [@bs.deriving abstract]
      type t = {
        [@bs.optional]
        hello: rootResolver(unit, string, Js.Nullable.t(string)),
        [@bs.optional]
        test: rootResolver(unit, string, Js.Nullable.t(string)),
      };
    };
    module Mutation: {};
    module Subscription: {};
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
    [@bs.deriving abstract]
    type t = {
      [@bs.optional] [@bs.as "Query"]
      query: Query.t,
    };
  };

module type SchemaConfig = {
  module Scalars: {};
  type resolver('parent, 'payload, 'fieldType, 'result);
  type directiveResolver('payload);
};
module MakeSchema = (Config: SchemaConfig) => {
  include Config.Scalars;
  type rootResolver('payload, 'fieldType, 'result) =
    Config.resolver(unit, 'payload, 'fieldType, 'result);
  type directiveResolver('payload) = Config.directiveResolver('payload);
  type query = {. "foo": Js.Nullable.t(string)};
  module Query = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      foo: rootResolver(unit, string, Js.Nullable.t(string)),
    };
  };
  module Mutation = {};
  module Subscription = {};
  module Directives = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      isAuthenticated: directiveResolver(unit),
      [@bs.optional] [@bs.as "include"]
      include_: directiveResolver({. "if": bool}),
      [@bs.optional]
      skip: directiveResolver({. "if": bool}),
      [@bs.optional]
      deprecated: directiveResolver({. "reason": Js.Nullable.t(string)}),
      [@bs.optional]
      hasScope:
        directiveResolver({
          .
          "scope": Js.Nullable.t(array(Js.Nullable.t(string))),
        }),
      [@bs.optional]
      upper: directiveResolver(unit),
      [@bs.optional]
      concat: directiveResolver({. "value": string}),
    };
  };
  [@bs.deriving abstract]
  type t = {
    [@bs.optional] [@bs.as "Query"]
    query: Query.t,
  };
};

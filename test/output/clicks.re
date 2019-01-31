module type SchemaConfig = {
  module Scalars: {type click;};
  type resolver('parent, 'payload, 'fieldType, 'result);
  type directiveResolver('payload);
};
module MakeSchema = (Config: SchemaConfig) => {
  include Config.Scalars;
  type rootResolver('payload, 'fieldType, 'result) =
    Config.resolver(unit, 'payload, 'fieldType, 'result);
  type directiveResolver('payload) = Config.directiveResolver('payload);
  type mutation = {. "click": click}
  and query = {. "clicks": click};
  module Query = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clicks: rootResolver(unit, click, click),
    };
  };
  module Mutation = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      click: rootResolver({. "payload": string}, click, click),
    };
  };
  module Subscription = {};
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
  [@bs.deriving abstract]
  type t = {
    [@bs.optional] [@bs.as "Query"]
    query: Query.t,
    [@bs.optional] [@bs.as "Mutation"]
    mutation: Mutation.t,
  };
};

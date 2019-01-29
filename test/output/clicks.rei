module type SchemaConfig = {
  module Scalars: {type click;};
  type resolver('parent, 'payload, 'fieldType, 'result);
  type directiveResolver('payload);
};
module MakeSchema:
  (Config: SchemaConfig) =>
  {
    type click = Config.Scalars.click;
    type rootResolver('payload, 'fieldType, 'result) =
      Config.resolver(unit, 'payload, 'fieldType, 'result);
    type directiveResolver('payload) = Config.directiveResolver('payload);
    type mutation = {. "click": click}
    and query = {. "clicks": click};
    module Queries: {
      [@bs.deriving abstract]
      type t = {
        [@bs.optional]
        clicks: rootResolver(unit, click, click),
      };
    };
    module Mutations: {
      [@bs.deriving abstract]
      type t = {
        [@bs.optional]
        click: rootResolver({. "payload": string}, click, click),
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

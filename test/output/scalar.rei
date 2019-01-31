module type SchemaConfig = {
  module Scalars: {type json; type dateTime;};
  type resolver('parent, 'payload, 'fieldType, 'result);
  type directiveResolver('payload);
};
module MakeSchema:
  (Config: SchemaConfig) =>
  {
    type json = Config.Scalars.json;
    type dateTime = Config.Scalars.dateTime;
    type rootResolver('payload, 'fieldType, 'result) =
      Config.resolver(unit, 'payload, 'fieldType, 'result);
    type directiveResolver('payload) = Config.directiveResolver('payload);
    type query = {
      .
      "dateTime": dateTime,
      "json": json,
    };
    module Query: {
      [@bs.deriving abstract]
      type t = {
        [@bs.optional]
        json: rootResolver(unit, json, json),
        [@bs.optional]
        dateTime: rootResolver(unit, dateTime, dateTime),
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
  };

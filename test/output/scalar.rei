module type SchemaConfig = {
  module Scalars: {type json; type dateTime;};
  type resolver('payload, 'fieldType, 'result);
  type directiveResolver('payload);
};
module MakeSchema:
  (Config: SchemaConfig) =>
  {
    type json = Config.Scalars.json;
    type dateTime = Config.Scalars.dateTime;
    type resolver('payload, 'fieldType, 'result) =
      Config.resolver('payload, 'fieldType, 'result);
    type directiveResolver('payload) = Config.directiveResolver('payload);
    type query = {
      .
      "dateTime": dateTime,
      "json": json,
    };
    module Queries: {
      [@bs.deriving abstract]
      type t = {
        [@bs.optional]
        json: resolver(unit, json, json),
        [@bs.optional]
        dateTime: resolver(unit, dateTime, dateTime),
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

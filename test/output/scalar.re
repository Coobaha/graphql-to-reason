module type SchemaConfig = {
  module Scalars: {
    type json;
    type dateTime;
  };
  type resolver('parent, 'payload, 'fieldType, 'result);
  type directiveResolver('payload);
};
module MakeSchema = (Config: SchemaConfig) => {
  include Config.Scalars;
  type rootResolver('payload, 'fieldType, 'result) =
    Config.resolver(unit, 'payload, 'fieldType, 'result);
  type directiveResolver('payload) = Config.directiveResolver('payload);
  type query = {
    .
    "json": json,
    "dateTime": dateTime,
  };
  module Queries = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      json: rootResolver(unit, json, json),
      [@bs.optional]
      dateTime: rootResolver(unit, dateTime, dateTime),
    };
  };
  module Mutations = {};
  module Subscriptions = {};
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

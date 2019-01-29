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
  type mutation = {
    .
    "nullableArrayOfNullableInts": Js.Nullable.t(array(Js.Nullable.t(int))),
  }
  and query = {. "test": string};
  module Queries = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      test: rootResolver(unit, string, string),
    };
  };
  module Mutations = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      nullableArrayOfNullableInts:
        rootResolver(unit, int, Js.Nullable.t(array(Js.Nullable.t(int)))),
    };
  };
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

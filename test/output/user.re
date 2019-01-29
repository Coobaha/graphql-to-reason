module type SchemaConfig = {
  module Scalars: {type id;};
  type resolver('parent, 'payload, 'fieldType, 'result);
  type directiveResolver('payload);
};
module MakeSchema = (Config: SchemaConfig) => {
  include Config.Scalars;
  type rootResolver('payload, 'fieldType, 'result) =
    Config.resolver(unit, 'payload, 'fieldType, 'result);
  type directiveResolver('payload) = Config.directiveResolver('payload);
  [@bs.deriving {jsConverter: newType}]
  type userTypes = [
    | [@bs.as "SuperUser"] `SuperUser
    | [@bs.as "Administrator"] `Administrator
    | [@bs.as "Customer"] `Customer
  ];
  [@bs.deriving {jsConverter: newType}]
  type gender = [
    | [@bs.as "Male"] `Male
    | [@bs.as "Female"] `Female
    | [@bs.as "NonBinary"] `NonBinary
  ];
  type wrapper = {. "foo": Js.Nullable.t(string)}
  and genderInput = {
    .
    "check": bool,
    "another": Js.Nullable.t(string),
    "listOfStrings": array(Js.Nullable.t(string)),
    "nullableListOfStrings": Js.Nullable.t(array(Js.Nullable.t(string))),
    "wrapper": wrapper,
    "gender": Js.Nullable.t(abs_gender),
  };
  type userLike = {. "name": string}
  and query = {. "user": Js.Nullable.t(user)}
  and user = {
    .
    "name": string,
    "email": string,
    "gender": Js.Nullable.t(gender),
    "listNullable": Js.Nullable.t(array(Js.Nullable.t(string))),
    "list": array(Js.Nullable.t(string)),
    "getGender": gender,
    "self": user,
  };
  module Queries = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      user: rootResolver(unit, user, Js.Nullable.t(user)),
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

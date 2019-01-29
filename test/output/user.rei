module type SchemaConfig = {
  module Scalars: {type id;};
  type resolver('parent, 'payload, 'fieldType, 'result);
  type directiveResolver('payload);
};
module MakeSchema:
  (Config: SchemaConfig) =>
  {
    type id = Config.Scalars.id;
    type rootResolver('payload, 'fieldType, 'result) =
      Config.resolver(unit, 'payload, 'fieldType, 'result);
    type directiveResolver('payload) = Config.directiveResolver('payload);
    type userTypes = [ | `Administrator | `Customer | `SuperUser];
    type abs_userTypes;
    let userTypesToJs: userTypes => abs_userTypes;
    let userTypesFromJs: abs_userTypes => userTypes;
    type gender = [ | `Female | `Male | `NonBinary];
    type abs_gender;
    let genderToJs: gender => abs_gender;
    let genderFromJs: abs_gender => gender;
    type wrapper = {. "foo": Js.Nullable.t(string)}
    and genderInput = {
      .
      "another": Js.Nullable.t(string),
      "check": bool,
      "gender": Js.Nullable.t(abs_gender),
      "listOfStrings": array(Js.Nullable.t(string)),
      "nullableListOfStrings": Js.Nullable.t(array(Js.Nullable.t(string))),
      "wrapper": wrapper,
    };
    type userLike = {. "name": string}
    and query = {. "user": Js.Nullable.t(user)}
    and user = {
      .
      "email": string,
      "gender": Js.Nullable.t(gender),
      "getGender": gender,
      "list": array(Js.Nullable.t(string)),
      "listNullable": Js.Nullable.t(array(Js.Nullable.t(string))),
      "name": string,
      "self": user,
    };
    module Queries: {
      [@bs.deriving abstract]
      type t = {
        [@bs.optional]
        user: rootResolver(unit, user, Js.Nullable.t(user)),
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

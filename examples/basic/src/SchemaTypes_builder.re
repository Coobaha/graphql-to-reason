module type SchemaConfig = {
  module Scalars: {};
  type resolver('payload, 'fieldType, 'result);
  type directiveResolver('payload);
};
module MakeSchema = (Config: SchemaConfig) => {
  include Config.Scalars;
  type resolver('payload, 'fieldType, 'result) =
    Config.resolver('payload, 'fieldType, 'result);
  type directiveResolver('payload) = Config.directiveResolver('payload);
  type mutation = {. "addArticle": Js.Nullable.t(article)}
  and query = {
    .
    "article": Js.Nullable.t(article),
    "articles": array(article),
  }
  and article = {
    .
    "id": string,
    "title": string,
    "body": string,
  };
  module Queries = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      article: resolver({. "id": string}, article, Js.Nullable.t(article)),
      [@bs.optional]
      articles: resolver(unit, article, array(article)),
    };
  };
  module Mutations = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      addArticle:
        resolver(
          {
            .
            "title": string,
            "body": string,
          },
          article,
          Js.Nullable.t(article),
        ),
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

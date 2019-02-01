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
  type mutation = {. "addArticle": Js.Nullable.t(article)}
  and query = {
    .
    "article": Js.Nullable.t(article),
    "articles": array(article),
  }
  and comment = {. "content": string}
  and article = {
    .
    "id": string,
    "title": string,
    "body": string,
    "comments": Js.Nullable.t(array(comment)),
  };
  module Query = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      article:
        rootResolver({. "id": string}, article, Js.Nullable.t(article)),
      [@bs.optional]
      articles: rootResolver(unit, article, array(article)),
    };
  };
  module Mutation = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      addArticle:
        rootResolver(
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
  module Article = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      id: Config.resolver(article, unit, string, string),
      [@bs.optional]
      title: Config.resolver(article, unit, string, string),
      [@bs.optional]
      body: Config.resolver(article, unit, string, string),
      [@bs.optional]
      comments:
        Config.resolver(
          article,
          unit,
          comment,
          Js.Nullable.t(array(comment)),
        ),
    };
  };
  module Comment = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      content: Config.resolver(comment, unit, string, string),
    };
  };
  [@bs.deriving abstract]
  type t = {
    [@bs.optional] [@bs.as "Article"]
    article: Article.t,
    [@bs.optional] [@bs.as "Comment"]
    comment: Comment.t,
    [@bs.optional] [@bs.as "Query"]
    query: Query.t,
    [@bs.optional] [@bs.as "Mutation"]
    mutation: Mutation.t,
  };
};

open Js;

let (articles, nextId) = {
  let a: Dict.t(SchemaTypes.article) = Dict.empty();
  a->Dict.set(
    "1",
    {
      "id": "1",
      "title": "First",
      "body": "Hello world",
      "comments": [|{"content": "First comment"}|]->Nullable.return,
    },
  );
  a->Dict.set(
    "2",
    {
      "id": "2",
      "title": "Second",
      "body": "Hello world",
      "comments": Nullable.null,
    },
  );
  (a, ref(3));
};

let getByIdResolver = (_node, args) =>
  articles->Dict.get(args##id)->Nullable.fromOption->Promise.resolve;

let resolver = (_node, _args) => articles->Dict.values->Promise.resolve;

let addArticle = (_node, args) => {
  let id = string_of_int(nextId^);
  let article = {
    "id": id,
    "title": args##title,
    "body": args##body,
    "comments": Js.Nullable.null,
  };
  articles->Dict.set(id, article);
  incr(nextId);
  article->Nullable.return->Promise.resolve;
};

module Comments = {
  let content = (parent, _args) => {
    Promise.resolve(parent##content ++ "!!!!!");
  };
};

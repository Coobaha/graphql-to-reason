open Js;

let (articles, nextId) = {
  let a = Dict.empty();
  a->Dict.set("1", {"id": "1", "title": "First", "body": "Hello world"});
  a->Dict.set("2", {"id": "2", "title": "Second", "body": "Hello world"});
  (a, ref(3));
};

let getByIdResolver = (_node, args) =>
  articles->Dict.get(args##id)->Nullable.fromOption->Promise.resolve;

let resolver = (_node, _args) => articles->Dict.values->Promise.resolve;

let addArticle = (_node, args) => {
  let id = string_of_int(nextId^);
  let article = {"id": id, "title": args##title, "body": args##body};
  articles->Dict.set(id, article);
  incr(nextId);
  article->Nullable.return->Promise.resolve;
};

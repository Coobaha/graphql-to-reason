let query =
  SchemaTypes.Queries.t(
    ~article=Articles.getByIdResolver,
    ~articles=Articles.resolver,
    (),
  );

let mutation = SchemaTypes.Mutations.t(~addArticle=Articles.addArticle, ());

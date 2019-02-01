let resolvers: SchemaTypes.t =
  SchemaTypes.t(
    ~query=
      SchemaTypes.Query.t(
        ~article=Articles.getByIdResolver,
        ~articles=Articles.resolver,
        (),
      ),
    ~mutation=SchemaTypes.Mutation.t(~addArticle=Articles.addArticle, ()),
    ~comment=SchemaTypes.Comment.t(~content=Articles.Comments.content, ()),
    (),
  );

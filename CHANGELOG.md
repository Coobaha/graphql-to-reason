# Changelog

> **Tags:**
> - :boom:       [Breaking Change]
> - :rocket:     [New Feature]
> - :bug:        [Bug Fix]
> - :memo:       [Documentation]
> - :house:      [Internal]
> - :nail_care:  [Polish]

## 1.0.0-alpha.0 - 2018-01.02

- :rocket: All possible resolvers are now being printed
- :boom: SchemaConfig.resolver type was changed, now it accepts parent type
- :boom: Module names for Query, Mutation and Subscription are now singular instead of plural (Queries -> Query)

### Breaking changes

SchemaConfig.resolver type was changed, it now accepts parent type

```diff
-  type resolver('args, 'fieldType, 'result) =
-    (unit, 'args) => Js.Promise.t('result);
+  type resolver('parent, 'args, 'fieldType, 'result) =
+    ('parent, 'args) => Js.Promise.t('result);
```

Module names for Query, Mutation and Subscription are now singular instead of plural (i.e. Queries -> Query)

```diff
-let query =
-  SchemaTypes.Queries.t(
-    ~article=Articles.getByIdResolver,
-    ~articles=Articles.resolver,
+let resolvers: SchemaTypes.t =
+  SchemaTypes.t(
+    ~query=
+      SchemaTypes.Query.t(
+        ~article=Articles.getByIdResolver,
+        ~articles=Articles.resolver,
+        (),
+      ),
+    ~mutation=SchemaTypes.Mutation.t(~addArticle=Articles.addArticle, ()),
+    ~comment=SchemaTypes.Comment.t(~content=Articles.Comments.content, ()),
     (),
   );
-
-let mutation = SchemaTypes.Mutations.t(~addArticle=Articles.addArticle, ());
```
    
## 0.4.1 - 2018-11-03
- :nail_care: Refactor where __typename is filtered

## 0.4.0 - 2018-11-03
- :bug: Don't print __typename for fields

## 0.3.1 - 2018-10-24
- :bug: Fix schema bin env

## 0.3.0 - 2018-10-24

- :rocket: Add own introspection query ([3c1d1995](https://github.com/Coobaha/graphql-to-reason/commit/3c1d1995))
- :bug: Fix types for extended queries

## 0.2.2 - 2018-10-23

- :bug: Fix cli params ([98eb89cb](https://github.com/Coobaha/graphql-to-reason/commit/98eb89cb))

## 0.2.1 - 2018-10-23

- :bug: [#3](https://github.com/Coobaha/graphql-to-reason/issues/3) Fix nullable list type

## 0.2.0 - 2018-10-23

- :bug: Fix type of printed field type ([7610909d](https://github.com/Coobaha/graphql-to-reason/commit/7610909d3cd289e7597750e6c3f44b97b4b9f903))
- :house: Fix githooks

## 0.1.3 - 2018-10-23

- :bug: Fix npm bin file

## 0.1.0-0.1.2 – 2018-10-22

* Initial release

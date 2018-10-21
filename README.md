# graphql-to-reason

[![Build Status](https://travis-ci.org/Coobaha/graphql-to-reason.svg?branch=master)](https://travis-ci.org/Coobaha/graphql-to-reason)
![npm](https://img.shields.io/npm/v/graphql-to-reason.svg)
This tool will transform existing GraphQL schema to ReasonML types to be used on server side.

## Usage

`graphql-to-reason` requires you to have json variant of `schema.graphql` (To generate it you can use `graphql-tools` `npx gqlschema -i schema.graphql -o schema.json`).

To generate reason file
`./graphql_to_reason.exe graphql_schema.json SchemaTypes_builder.re`


Usage example:

```graphql
scalar Click

type Query {
    clicks: Click!
}

type Mutation {
    click(payload: String!): Click!
}
```

```reasonml
include SchemaTypes_builder.MakeSchema({
  /*
     we need to configure our server types:
      - all scalar types
      - resolver type
      - custom directive resolver type
  */
  module Scalars = {
    type click = string;
  };
  /*
   args - our arguments Array
   fieldType - original field type
   result - resoved value (for example Js.Nullable.t(fieldType))
  */
  type resolver('args, 'fieldType, 'result) =
    (
      unit,
      'args,
      /*context args depend on your graphql setup*/
      ServerContext.GraphqlContext.t,
      ServerContext.ResolveInfo.t,
      ServerContext.FieldInfo.t('fieldType)
    ) =>
    Js.Promise.t('result);
  type directiveResolver('payload);
});


module Clicks = {
  let count = ref(0);
  /*No need to explicitly type resolver, it will infer correct type later*/
  let resolver = (_node, _args, _context, _resolveInfo, _fieldInfo) =>
    Js.Promise.make((~resolve, ~reject) => {
      count := count^ + 1;
      resolve(count^);
    });
};


let mutationResolvers =
  SchemaTypes.Mutations.t(
    /* Clicks.resolver now infers SchemaTypes.Mutations.clicksCount type */
    ~clicksCount=Clicks.resolver,
    (),
  );
```

### Bucklescript integration

Example setup done via [Bucklescript generators](https://bucklescript.github.io/docs/en/build-advanced#customize-rules-generators-support)

```json
{
  "generators": [
    // requires graphql-tools
    {
      "name": "introspect-and-generate-schematypes",
      "command":
        "npx gqlschema -i $in -o $in.json  && ../../../_build/default/graphql_to_reason.exe $in.json $out"
    },
    // or without introspection step
    {
      "name": "generate-schematypes",
      "command":
        "npx gqlschema -i $in -o $in.json  && ../../../_build/default/graphql_to_reason.exe $in.json $out"
    }
  ],
  "sources": [
    {
      "dir": "src",
      "generators": [
        {
          "name": "introspect-and-generate-schematypes",
          "edge": [
            // generated files are before ':'
            "SchemaTypes_builder.re",
            ":",
            // input file to watch
            "../fixtures/schema.graphql"
          ]
        },
        // or without introspection step
        {
          "name": "generate-schematypes",
          "edge": [
            // generated files are before ':'
            "SchemaTypes_builder.re",
            ":",
            // input file to watch
            "../fixtures/introspection_schema.json"
          ]
        }
      ]
    }
  ]
}
```

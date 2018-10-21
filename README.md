# graphql-to-reason

This tool will transform existing GraphQL schema to ReasonML types to be used on server side.

[![Build Status](https://travis-ci.org/Coobaha/graphql-to-reason.svg?branch=master)](https://travis-ci.org/Coobaha/graphql-to-reason)
![npm](https://img.shields.io/npm/v/graphql-to-reason.svg)

## Usage

`graphql-to-reason` requires json variant of `schema.graphql` aka introspection query

`schema.json` can be generated with [graphql-tools](https://github.com/apollographql/graphql-tools) and `npx gqlschema -i schema.graphql -o schema.json`).


Our simple graphql schema

```graphql
scalar Click

type Query {
    clicks: Click!
}

type Mutation {
    click(payload: String!): Click!
}
```

Next we generate ReasonML code from it:
`npx graphql-to-reason schema.json SchemaTypes_builder.re`

It will output `SchemaTypes_builder.re` to use it in other modules:
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

```
{
  "generators": [
    {
      "name": "introspect-and-generate-schematypes", // requires graphql-tools
      "command":
        "npx gqlschema -i $in -o $in.json  && npx graphql_to_reason $in.json $out"
    },
    {
      "name": "generate-schematypes",
      "command":
        "npx graphql_to_reason $in $out"
    }
  ],
  "sources": [
    {
      "dir": "src",
      "generators": [
        {
          "name": "introspect-and-generate-schematypes",
          "edge": ["SchemaTypes_builder.re", ":", "schema.graphql"]
        },
        {
          "name": "generate-schematypes",
          "edge": [ "SchemaTypes_builder.re", ":", "schema.json"]
        }
      ]
    }
  ]
}
```

# graphql-to-reason

This tool will transform existing GraphQL schema to ReasonML types to be used on server side.

[![Build Status](https://travis-ci.org/Coobaha/graphql-to-reason.svg?branch=master)](https://travis-ci.org/Coobaha/graphql-to-reason)
[![npm](https://img.shields.io/npm/v/graphql-to-reason.svg)](https://www.npmjs.com/package/graphql-to-reason)

## Installation

First, add this package as a dependency to your package.json:
```
yarn add --dev graphql-to-reason
# or, if you use npm:
npm install -D graphql-to-reason
```

`graphql-to-reason` requires json variant (aka introspection query) of `schema.graphql`.

`schema.json` can be generated with [graphql-tools](https://github.com/apollographql/graphql-tools) and `npx gqlschema -i schema.graphql -o schema.json`.

Integration with Bucklescript can be done via [generators](https://bucklescript.github.io/docs/en/build-advanced#customize-rules-generators-support)

a) With already introspected schema
```
{
  "generators": [
    {
      "name": "generate-schematypes",
      "command": "npx graphql-to-reason $in $out"
    }
  ],
  "sources": [
    {
      "dir": "src",
      "generators": [
        {
          "name": "generate-schematypes",
          "edge": [ "SchemaTypes_builder.re", ":", "schema.json"]
        }
      ]
    }
  ]
}
```

b) From `.graphql` (requires `graphql-tools`)

```
{
  "generators": [
    {
      "name": "generate-schematypes",
      "command": "npx gqlschema -i $in -o $in.json  && npx graphql-to-reason $in.json $out"
    },
  ],
  "sources": [
    {
      "dir": "src",
      "generators": [
        {
          "name": "generate-schematypes",
          "edge": ["SchemaTypes_builder.re", ":", "schema.graphql"]
        }
      ]
    }
  ]
}
```

### Usage Example 

Simple `schema.graphql`

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


### Development

Install [esy](https://github.com/esy/esy):

`npm install -g esy@latest`

Install dependencies:

`make install`

To build executables:

`make build`

To run tests:

`make test` 

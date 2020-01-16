# Basic example

## How to use

```bash
yarn
yarn bsb:dev
# another terminal window
yarn dev
```

## The idea behind the example

Shows how to write type safe resolvers for graphql schema

```
.
├── bsconfig.json                   # graphql-to-reason is configured here
└── src
    ├── Articles.re                 # resolvers related to articles
    ├── Resolvers.re                # export query and mutation for resolvers.js 
    ├── SchemaTypes.re              # schema in reason
    ├── SchemaTypes_builder.re      # generated module to use in SchemaTypes.re
    ├── resolvers.js                # server looks for this file
    ├── schema.graphql              # schema in graphql
    └── schema.graphql.json         # generated introspection query
```

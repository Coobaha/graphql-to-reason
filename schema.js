#!/usr/bin/env node

const fs = require("fs");
const util = require("util");
const graphql = require("graphql");
const mockServer = require("graphql-tools").mockServer;
const writeFileAsync = util.promisify(fs.writeFile);
const readFileAsync = util.promisify(fs.readFile);

async function exportSchema(schemaPath, outputPath) {
  const schema = await readFileAsync(schemaPath, "utf8");
  const result = await mockServer(schema).query(
    graphql.getIntrospectionQuery()
  );
  await writeFileAsync(outputPath, JSON.stringify(result, null, 2), "utf8");
}

const schemaPath = process.argv[2];
let outputPath = process.argv[3];
if (!outputPath) {
  outputPath = schemaPath + ".json";
}

if (!schemaPath) {
  console.error(
    "[graphql-to-reason] Please provide schema path to generate json schema"
  );
  process.exit(2);
}

exportSchema(schemaPath, outputPath).catch(e => {
  console.error(e);
  process.exit(2);
});

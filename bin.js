#!/usr/bin/env node
"use strict";

var child_process = require("child_process");
var path = require("path");
var fs = require("fs");

var arch = process.arch;
var platform = process.platform;

if (arch === "ia32") {
  arch = "x86";
}

if (platform === "win32") {
  platform = "win";
}

var filename = "graphql-to-reason-" + platform + "-" + arch + ".exe";
var exe = path.join(__dirname, "bin", filename);
var supported = fs.existsSync(exe);

if (!supported) {
  console.error("graphql-to-reason does not support this platform :(");
  console.error("");
  console.error(
    "graphql-to-reason comes prepacked as built binaries to avoid large"
  );
  console.error("dependencies at build-time.");
  console.error("");
  console.error(
    "If you want graphql-to-reason to support this platform natively,"
  );
  console.error("please open an issue at our repository, linked above. Please");
  console.error("specify that you are on the " + platform + " platform,");
  console.error("on the " + arch + " architecture.");
}

var delegate_args = process.argv.slice(2);

try {
  child_process.execFileSync(exe, delegate_args, { stdio: "inherit" });
} catch (e) {
  console.error(
    "Error happened when running command",
    exe,
    "with args",
    delegate_args
  );
  console.error("");
  console.error(e);
  console.error("");
  process.exit(2);
}

#!/usr/bin/env node

var fs = require('fs')

var arch = process.arch
var platform = process.platform

if (arch === 'ia32') {
  arch = 'x86'
}

if (platform === 'win32') {
  platform = 'win'
}

var filename = 'bin/graphql-to-reason-' + platform + '-' + arch + '.exe'
var supported = fs.existsSync(filename)

if (supported) {
  fs.chmodSync(filename, 755)
}

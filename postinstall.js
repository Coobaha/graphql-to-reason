#!/usr/bin/env node

const fs = require('fs')

let arch = process.arch
let platform = process.platform

if (arch === 'ia32') {
  arch = 'x86'
}

if (platform === 'win32') {
  platform = 'win'
}

const filename = 'bin/graphql-to-reason-' + platform + '-' + arch + '.exe'
const supported = fs.existsSync(filename)

if (supported) {
  fs.chmodSync(filename, 755)
}

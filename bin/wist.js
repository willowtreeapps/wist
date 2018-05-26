#!/usr/bin/env node

'use strict';

const CLI = require('../dist/bundle');

process.once('uncaughtException', err => {
    console.error(err.message);
    console.error(err.stack);
    process.exitCode = 1;
});

process.exitCode = CLI.execute(process.argv);

'use strict';

const Linter = require('./linter');
const CLIEngine = require('./cli-engine');
const Parser = require('../parser/index');

module.exports = {
    linter: new Linter(),
    CLIEngine,
    Linter,
    Parser
};
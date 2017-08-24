'use strict';

const Linter = require('./linter');

module.exports = {
    linter: new Linter(),
    Linter,
    CLIEngine: require('./cli-engine')
};
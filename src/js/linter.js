'use strict';

const core = require('../../dist/libwist');
const EventEmitter = require('events').EventEmitter;
const Rules = require('./rules');
const ConfigOps = require('./config/config-ops');

function captureErrors(cb) {
    const errors = [],
        consoleError = console.error;

    console.error = () => {
        let message = consoleError.apply(console, arguments);
        errors.push(message);
    }

    const ast = cb();

    return {
        errors,
        ast
    };
}

/**
 * Get the severity level of a rule (0 - none, 1 - warning, 2 - error)
 * Returns 0 if the rule config is not valid (an Array or a number)
 * @param {Array|number} ruleConfig rule configuration
 * @returns {number} 0, 1, or 2, indicating rule severity
 */
function getRuleSeverity(ruleConfig) {
    return Array.isArray(ruleConfig) ? ruleConfig[0] : ruleConfig;
}

function createProblemFromDescriptor(descriptor, ruleId, severity) {
    const problem = {
        ruleId,
        severity,
        message: descriptor.message,
        line: descriptor.loc.start.line,
        column: descriptor.loc.start.column,
        nodeType: descriptor.node && descriptor.node.type || null
    };

    if (descriptor.loc.end) {
        problem.endLine = descriptor.loc.end.line;
        problem.endColumn = descriptor.loc.end.column + 1;
    }

    return problem;
}

function parseMessages(parseErrors, filename) {
    let parseResult, messages = [];

    try {

        // The vector that comes out of the wasm module doesn't have a length property defined.
        // It also doesn't have an iterator so we need to loop until we find something
        // that's undefined and then bail out.
        for (let i = 0; i < 99; i++) {
            let error = parseErrors.get(i);
            if (error == undefined) {
                break;
            }
            messages.push({
                ruleId: null,
                fatal: true,
                severity: 2,
                source: null,
                message: `Parsing error: ${error.message}`,
                line: error.line,
                column: error.column
            });
        }



    }
    catch (ex) {
        messages.push({
            ruleId: null,
            fatal: true,
            severity: 2,
            source: null,
            message: `Parsing error: ${ex.message}`,
            line: ex.lineNumber,
            column: ex.column
        });
    }

    return messages;
}

class Linter extends EventEmitter {
    constructor() {
        super();
        this.messages = [];
        this.rules = new Rules();
    }

    reset() {
        this.removeAllListeners();
        this.messages = [];
    }

    verify(text, filename, config) {

        config = Object.assign({}, config);

        if (text == null || text.trim().length === 0) {
            return this.messages;
        }
        const parseResult = core.parseText(text, this);
        const formattedMessages = parseMessages(parseResult, this.currentFilename);
        this.messages.push(...formattedMessages);

        this.messages.sort((a, b) => {
            const lineDiff = a.line - b.line;

            if (lineDiff === 0) {
                return a.column - b.column;
            }

            return lineDiff;
        });

        return this.messages;
    }
}

module.exports = Linter;
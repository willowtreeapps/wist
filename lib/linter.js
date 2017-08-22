'use strict';

const parser = require('brs-lang'),
    EventEmitter = require('events').EventEmitter;

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

function parse(text, filename, messages) {
    try {
        let parseResult = parser.parseText(text);

        if (parseResult.errors.length > 0) {
            parseResult.errors.forEach(error => {
                messages.push({
                    ruleId: null,
                    fatal: true,
                    severity: 2,
                    source: null,
                    message: `Parsing error: ${error.message}`,
                    line: error.line,
                    column: error.column
                });
            });

            return null;
        }

        return parseResult.ast;
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
    
    return null;
}

class Linter extends EventEmitter {
    constructor() {
        super();

        this.messages = [];
    }

    reset() {
        this.removeAllListeners();
        this.messages = [];
    }

    verify(text, filename) {
        let parseResult = parse(text, this.currentFilename, this.messages);
        
        return this.messages;
    }
}

module.exports = Linter;
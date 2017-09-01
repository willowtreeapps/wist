/*
Copyright JS Foundation and other contributors, https://js.foundation

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

/*
* This code is taken from the eslint repo
* (https://github.com/eslint/eslint)
* and modified to meet our needs.
*/

'use strict';

const parser = require('brs-lang'),
    EventEmitter = require('events').EventEmitter,
    Rules = require('./rules'),
    ConfigOps = require('./config/config-ops');

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
    let problem = {
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

function parse(text, filename) {
    let parseResult,
        messages = [];

    try {
        parseResult = parser.parseText(text);

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
    
    return {
        messages,
        ast: parseResult && parseResult.errors.length === 0 ? parseResult.ast : null
    };
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
        let ast,
            parseResult;

        config = Object.assign({}, config);

        if (text == null || text.trim().length === 0) {
            return this.messages;
        }

        parseResult = parse(text, this.currentFilename);
        ast = parseResult.ast;
        
        this.messages.push(...parseResult.messages);

        if (!ast) {
            return this.messages;
        }

        ConfigOps.normalize(config);

        Object.keys(config.rules).filter(ruleId => getRuleSeverity(config.rules[ruleId]) > 0).forEach(ruleId => {
            const ruleCreator = this.rules.get(ruleId);

            if (!ruleCreator) {
                return;
            }

            const severity = getRuleSeverity(config.rules[ruleId]);

            const ruleContext = Object.freeze(Object.assign(Object.create(null), {
                id: ruleId,
                report: descriptor => {
                    const problem = createProblemFromDescriptor(descriptor, ruleId, severity);
                    this.messages.push(problem);
                }
            }));

            try {
                const rule = ruleCreator.create(ruleContext);

                Object.keys(rule).forEach(selector => {
                    this.on(selector, rule[selector]);
                });
            }
            catch (ex) {
                ex.message = `Error while loading rule '${ruleId}': ${ex.message}`;
                throw ex;
            }
        });

        parser.traverse(ast, this);

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
'use strict';

const options = require('./options'),
    CLIEngine = require("./cli-engine"),
    log = require('./logging');

/**
 * Outputs the results of the linting.
 * @param {CLIEngine} engine The CLIEngine to use.
 * @param {LintResult[]} results The results to print.
 * @param {string} format The name of the formatter to use or the path to the formatter.
 * @returns {boolean} True if the printing succeeds, false if not.
 * @private
 */
function printResults(engine, results, format) {
    let formatter;

    try {
        formatter = engine.getFormatter(format);
    }
    catch (e) {
        log.error(e.message);
        return false;
    }

    const output = formatter(results);

    if (output) {
        log.info(output);
    }

    return true;
}

const cli = {
    execute(args) {
        let currentOptions;

        try {
            currentOptions = options.parse(args);
        }
        catch (e) {
            console.error(e.message);
            return 1;
        }
        
        const files = currentOptions._;

        if (currentOptions.help || !files.length) {
            log.info(options.generateHelp());
        }
        else {
            const engine = new CLIEngine(currentOptions);
            const report = engine.executeOnFiles(files);

            if (printResults(engine, report.results, currentOptions.format)) {
                return report.errorCount ? 1 : 0;
            }

            return 1;
        }

        return 0;
    }
};

module.exports = cli;
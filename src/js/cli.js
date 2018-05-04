'use strict';

const options = require('./options'),
    CLIEngine = require("./cli-engine"),
    log = require('./logging'),
    fs = require('fs'),
    path = require('path');


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

        if (currentOptions.init) {
            return handleInitialize(currentOptions);

        } else if (currentOptions.config) {
            return handleConfiguration(currentOptions.config);
        }

        else if (currentOptions.help || !files.length) {
            log.info(options.generateHelp());

        } else {
            var hrstart = process.hrtime();
            const engine = new CLIEngine(currentOptions);
            const report = engine.executeOnFiles(files);

            if (printResults(engine, report.results, currentOptions.format)) {
                var hrend = process.hrtime(hrstart);
                log.info(`Finished in ${(hrend[0] + (hrend[1] /1e9)).toFixed(2)}s\n`);
                return report.errorCount ? 1 : 0;
            }

            return 1;
        }
        return 0;
    }
};

/**
 * Creates the .wistrc.json file in the default location if a configuration path is not specified.
 * @param currentOptions Command lines arguments input by user.
 * @returns {boolean} True if the initialization succeeds, false if not.
 * @private
 */
function handleInitialize(currentOptions) {
    const recommendedFilePath = '../config/wist-recommended.json';
    let result = 0;
    if (currentOptions.config) {
        result = handleConfiguration(currentOptions.config);
    } else {
        result = handleConfiguration(recommendedFilePath);
    }
    return result
}

/**
 * Creates the .wistrc.json file from the user-defined configuration file.
 * @param filePath Path to the user-defined configuration file.
 * @returns {boolean} True if the creation of the configuration file succeeds, false if not.
 * @private
 */
function handleConfiguration(filePath) {
    if (fs.existsSync(filePath)) {
        filePath = path.resolve(filePath);
    }
    else {
        console.error('Invalid path to configuration file.');
        return 1;
    }
    return setupConfigurationFile(filePath);
}


/**
 * Creates the .wistrc.json file from the contents of the specified file.
 * @param configFilePath Path to the configuration file.
 * @returns {boolean} True if the creation of the configuration file succeeds, false if not.
 * @private
 */
function setupConfigurationFile(configFilePath) {
    const fileName = '.wistrc.json';

    try {
        let contents = require(configFilePath);
        fs.writeFileSync(fileName, JSON.stringify(contents, null, 2));
    } catch (e) {
        console.error(e.message);
        return 1;
    }
    return 0;
}

module.exports = cli;

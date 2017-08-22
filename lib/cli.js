'use strict';

const options = require('./options'),
    CLIEngine = require("./cli-engine"),
    log = require('./logging');

const cli = {
    execute(args) {
        let currentOptions;

        try {
            currentOptions = options.parse(args);
        } catch (error) {
            console.error(error.message);
            return 1;
        }
        
        const files = currentOptions._;

        if (currentOptions.help || !files.length) {
            log.info(options.generateHelp());
        }
        else {

            const engine = new CLIEngine(currentOptions);
            const report = engine.executeOnFiles(files);

            log.info(JSON.stringify(report.results));
            return report.errorCount > 0 ? 1 : 0;
        }

        return 0;
    }
};

module.exports = cli;
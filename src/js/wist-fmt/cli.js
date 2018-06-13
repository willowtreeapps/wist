'use strict';

const fs = require('fs');
const path = require('path');
const options = require('./options');
const log = require('../logging');
const projectMeta = require('../../../package.json');
const wist = require('../../../dist/libwist');
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

        if (currentOptions.version) {
            log.info("wist-fmt version " + projectMeta.version);
        } else if (currentOptions.help || !files.length) {
            log.info(options.generateHelp());
        } else {
            var hrstart = process.hrtime();

            let indent = 4;
            let useTabs = false;

            if (currentOptions.indent) {
                indent = currentOptions.indent;
            }
            if (currentOptions.useTabs) {
                useTabs = currentOptions.useTabs;
            }
            files.forEach(filename => {
                try {
                    let filePath = path.resolve(filename);
                    let text = fs.readFileSync(filePath, 'utf8');
                    let output = wist.formatText(text, indent, useTabs);
                    fs.writeFileSync(filePath, output, "utf8");
                } catch (e) {
                    log.error(e.message);
                }
            });

            var hrend = process.hrtime(hrstart);
            log.info(`Finished in ${(hrend[0] + (hrend[1] / 1e9)).toFixed(2)}s\n`);
        }
        return 0;
    }
};

module.exports = cli;
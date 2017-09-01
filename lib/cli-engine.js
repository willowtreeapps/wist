'use strict';

const fs = require('fs'),
    path = require('path'),
    Linter = require('./linter'),
    Config = require('./config');

function calculateStatsPerFile(messages) {
    return messages.reduce((stat, message) => {
        if (message.fatal || message.severity === 2) {
            stat.errorCount++;
        }
        else {
            stat.warningCount++;
        }

        return stat;
    }, {
        errorCount: 0,
        warningCount: 0
    });
}

function calculateStatsPerRun(results) {
    return results.reduce((stat, result) => {
        stat.errorCount += result.errorCount;
        stat.warningCount += result.warningCount;

        return stat;
    }, {
        errorCount: 0,
        warningCount: 0
    });
}

function processText(text, filename, linter, configHelper) {
    linter.reset();

    let filePath,
        fileExtension,
        messages;

    if (filename) {
        filePath = path.resolve(filename);
        fileExtension = path.extname(filename);
    }

    const config = configHelper.getConfig(filePath);
    messages = linter.verify(text, filename, config);

    const stats = calculateStatsPerFile(messages);

    const result = {
        filePath: filename,
        messages,
        errorCount: stats.errorCount,
        warningCount: stats.warningCount
    };

    return result;
}

function processFile(filename, linter, configHelper) {
    const text = fs.readFileSync(path.resolve(filename), 'utf8'),
        result = processText(text, filename, linter, configHelper);

    return result;

}

class CLIEngine {
    constructor(options) {
        options = Object.assign(
            Object.create(null),
            { cwd: process.cwd() },
            options
        );

        this.options = options;
        this.linter = new Linter();
        this.config = new Config(this.options, this.linter);
    }

    executeOnFiles(patterns) {
        const results = [],
            configHelper = this.config;

        function executeOnFile(filename, linter) {
            const result = processFile(filename, linter, configHelper);
            results.push(result);
        }

        patterns.forEach(filename => {
            executeOnFile(filename, this.linter);
        });

        const stats = calculateStatsPerRun(results);

        return {
            results,
            errorCount: stats.errorCount,
            warningCount: stats.warningCount
        };
    }

    executeOnText(text, filename) {
        const results = [],
            options = this.options,
            configHelper = this.config;

        if (filename && !path.isAbsolute(filename)) {
            filename = path.resolve(options.cwd, filename);
        }

        results.push(processText(text, filename, this.linter, configHelper));

        const stats = calculateStatsPerRun(results);

        return {
            results,
            errorCount: stats.errorCount,
            warningCount: stats.warningCount
        };
    }
}

module.exports = CLIEngine;
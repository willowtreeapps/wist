'use strict';

const optionator = require('optionator');

module.exports = optionator({
    prepend: "bslint [options] file.js [file.js] [dir]",
    defaults: {
        concatRepeatedArrays: true,
        mergeRepeatedObjects: true
    },
    options: [
        {
            heading: "Basic configuration"
        },
        {
            option: "format",
            alias: "f",
            type: "String",
            enum: ["console", "json"],
            default: "console",
            description: "Output format"
        },
        {
            option: "verbose",
            alias: "v",
            type: "Boolean",
            default: false,
            description: "Verbose logging"
        },
        {
            option: "help",
            alias: "h",
            type: "Boolean",
            description: "Show help"
        }
    ]
});
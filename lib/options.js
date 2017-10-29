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
            option: "init",
            alias: "i",
            type: "Boolean",
            description: "Initialize BSLint"
        },
        {
            option: "config",
            alias: "c",
            type: "String",
            description: "Use specified configuration file"
        },
        {
            option: "format",
            alias: "f",
            type: "String",
            enum: ["compact", "json", "stylish", "unix", "visualstudio"],
            default: "stylish",
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
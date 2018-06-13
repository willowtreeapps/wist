'use strict';

const optionator = require('optionator');

module.exports = optionator({
    prepend: "Usage: wist-fmt [options] [file.brs]",
    defaults: {
        concatRepeatedArrays: true,
        mergeRepeatedObjects: true
    },
    options: [
        {
            option: "indent",
            alias: "i",
            type: "Int",
            description: "Number of tokens to indent"
        },
        {
            option: "use-tabs",
            type: "Boolean",
            description: "Indent with tabs"
        },
        {
            option: "help",
            alias: "h",
            type: "Boolean",
            description: "Show help"
        },
        {
            option: "version",
            alias: "v",
            type: "Boolean",
            description: "Show version information"
        }
    ]
});
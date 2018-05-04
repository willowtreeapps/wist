'use strict';

module.exports = {
    info() {
        console.log.apply(console, Array.from(arguments));
    },
    error() {
        console.error.apply(console, Array.from(arguments));
    }
}
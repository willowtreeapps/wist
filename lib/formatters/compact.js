'use strict';

function getMessageType(message) {
    if (message.fatal || message.severity === 2) {
        return 'Error';
    }
    return 'Warning';

}

module.exports = function(results) {

    let output = '',
        total = 0;

    results.forEach(result => {

        const messages = result.messages;

        total += messages.length;

        messages.forEach(message => {
            output += `${result.filePath}: `;
            output += `line ${message.line || 0}`;
            output += `, col ${message.column || 0}`;
            output += `, ${getMessageType(message)}`;
            output += ` - ${message.message}`;
            output += message.ruleId ? ` (${message.ruleId})` : '';
            output += '\n';

        });

    });

    if (total > 0) {
        output += `\n${total} problem${total !== 1 ? 's' : ''}`;
    }

    return output;
};

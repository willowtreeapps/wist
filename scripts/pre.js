var Module = {
    'locateFile': function (url) {
        const path = require('path');
        return path.resolve(__dirname) + '/' + url;
    }
}
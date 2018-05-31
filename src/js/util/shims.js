// Shims for TreeNodeList
const parser = require('../../../dist/libwist');

if (parser.TreeNodeList.prototype.forEach == null) {
    parser.TreeNodeList.prototype.forEach = function (callback) {
        let i = 0;
        while (true) {
            let value = this.get(i)
            if (value == null) {
                break;
            }
            callback(value, i, this);
            i++;
        };
    };
}
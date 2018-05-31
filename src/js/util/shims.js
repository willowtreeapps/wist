// Shims for TreeNodeList
const parser = require('../../../dist/libwist');

if (parser.TreeNodeList.prototype.forEach == null) {
    parser.TreeNodeList.prototype.forEach = function (callback) {
        let i = 0;
        while (true) {
            let value = this.get(i);
            if (value == null) {
                break;
            }
            callback(value, i, this);
            i++;
        };
    };
}

if (parser.TreeNodeList.prototype.size == null) {
    parser.TreeNodeList.prototype.size = function () {
        let i = 0;
        while (true) {
            let value = this.get(i);
            if (value == null) {
                break;
            }
            i++;
        };
        return i;
    };
}

if (parser.TreeNodeList.prototype.zipWithNext == null) {
    parser.TreeNodeList.prototype.zipWithNext = function (callback) {
        let i = 0;
        while (true) {
            let current = this.get(i);
            let next = this.get(i + 1);
            if (current == null) {
                break;
            }
            callback(current, next);
            i++;
        };
    }
}

if (parser.TreeNodeList.prototype.find == null) {
    parser.TreeNodeList.prototype.find = function (predicate) {
        let i = 0;
        while (true) {
            let node = this.get(i);
            if (node == null) {
                return null;
            } else if (predicate(node)) {
                return node;
            }
            i++;
        };
    }
}

if (parser.TreeNodeList.prototype.count == null) {
    parser.TreeNodeList.prototype.count = function (predicate) {
        let i = 0;
        let count = 0;
        while (true) {
            let node = this.get(i);
            if (node == null) {
                return count;
            } else if (predicate(node)) {
                console.log(node);
                count++;
            }
            i++;
        };
    }
}
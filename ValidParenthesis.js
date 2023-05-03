/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
    let stack = [];
    let dict = {
        "(" : ")",
        "[" : "]",
        "{" : "}"
    }

    for (let character of s) {
            if (dict[character])
                stack.push(dict[character])
            else if (character !== stack.pop()) {
                return false;
            }

    }
    return stack.length === 0 ? true : false
};

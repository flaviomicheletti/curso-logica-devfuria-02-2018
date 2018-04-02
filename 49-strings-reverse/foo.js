var assert = require('assert');

//
// 1
//
var reverseString1 = function(text) {
    var l = text.split('');
    l.reverse();
    return l.join('');
}

//
// 2
//
var reverseString2 = function(text) {
    return text.split('').reverse().join('');
}

//
// 3
//
var reverseString3 = function(text) {
    var backward = [];
    for (var i = text.length - 1, j = 0; i >= 0; i--, j++)
        backward[j] = text[i];
    return backward.join('');
}


//
// Seu teste
//
try {
    assert.equal("lamina", reverseString1("animal"));
    assert.equal("lamina", reverseString2("animal"));
    assert.equal("lamina", reverseString3("animal"));
} catch(e) {
    console.log(e);
}


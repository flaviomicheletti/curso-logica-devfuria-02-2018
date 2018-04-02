var assert = require('assert');

var antecessor = function(numero) {
    return numero - 1;
}

var sucessor = function(numero) {
    return numero + 1;
}


//
// Seu teste
//
try {
    assert.equal(9, antecessor(10), "deve retornar o antecessor");
    assert.equal(11, sucessor(10), "deve retornar o sucessor");
} catch(e) {
    console.log(e);
}
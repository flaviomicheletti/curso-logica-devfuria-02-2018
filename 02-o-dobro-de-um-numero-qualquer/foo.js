var assert = require('assert');

//
// Função que retorna o dobro de um número qualquer
//
var dobro = function(num) {
    return num * 2;
}

//
// Testes
//
try {
    assert.equal(10, dobro(5));
} catch(e) {
    console.log(e);
}


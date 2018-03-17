var assert = require('assert');

//
//
//
var media = function(valor1, valor2, valor3) {
    return (valor1 + valor2 + valor3) / 3;
}

//
// Seu teste
//
try {
    assert.equal(7, media(6, 7, 8), "deve retornar a média");
} catch(e) {
    console.log(e);
}
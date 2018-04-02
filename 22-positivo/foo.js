var assert = require('assert');

// Função que descobre se um número é positivo ou negativo
//
// retornará 1 caso positivo
// retornará 0 caso negativo
//
var ehPositivo = function(numero) {
    if(numero >= 0) {
        return 1;
    } else {
        return 0;
    }
}

//
// Testes
//
try {
    assert.equal(1, ehPositivo(100));
    assert.equal(1, ehPositivo(0));
    assert.equal(0, ehPositivo(-100));
} catch(e) {
    console.log(e);
}

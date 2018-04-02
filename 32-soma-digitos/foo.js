var assert = require('assert');

var somarDigitos = function(numero) {
    var soma = 0;

    while (numero != 0) {
        soma   += numero % 10;
        numero  = parseInt(numero / 10); // <--- atenção
    }

    return soma;
}


//
// Testes
//
try {

    assert.equal(8, somarDigitos(2015));
    assert.equal(15, somarDigitos(456));

} catch(e) {
    console.log(e);
}

var assert = require('assert');

// 
// Função que descobre se um número é par ou ímpar
//
var ehPar = function(numero) {
	if (numero % 2 == 0) {
	    return true;
	} else {
	    return false;
	}
}

//
// Testes
//
try {
    assert.ok(ehPar(8));
    assert.ok(!ehPar(7));
    assert.ok(ehPar(0));
} catch(e) {
    console.log(e);
}
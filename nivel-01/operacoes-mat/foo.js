var assert = require('assert');

//
// Funções...
//

var somar = function(num, add) {
	return num + add;
}

var subtrair = function(num, sub) {
	return num - sub;
}

var multiplicar = function(num, mult) {
	return num * mult;
}

var dividir = function(num, divisor) {
	return num / divisor;
}

//
// Testes
//
try {
    var num = 10;

    assert.equal(12, somar(num, 2));
    assert.equal(8, subtrair(num, 2));
    assert.equal(20, multiplicar(num, 2));
    assert.equal(5, dividir(num, 2));
} catch(e) {
    console.log(e);
}


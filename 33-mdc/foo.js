var assert = require('assert');

//
// Função mdc
//
var mdc = function(num1, num2) {

    var resto;

    do {
        resto = num1 % num2;

        num1 = num2;
        num2 = resto;

    } while (resto != 0);

    return num1;
}

//
// Testes
//
try {

    assert.equal(3, mdc(24, 9));
    assert.equal(10, mdc(30, 20));

} catch(e) {
    console.log(e);
}

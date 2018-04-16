var assert = require('assert');

//
// Variáveis
//
var a, b, temp;
a = 999;
b = 555;

//
// Sua lógica
//
temp = a;    // registramos o valor de 'a' em 'temp'
a    = b;    // sobrescrever 'a' com o valor de 'b'
b    = temp; // sobrescrever 'b' com o valor que era de 'a' (e foi registrado em 'temp')

//
// Seu teste
//
try {
    assert.equal(555, a);
    assert.equal(999, b);
} catch(e) {
    console.log(e);
}
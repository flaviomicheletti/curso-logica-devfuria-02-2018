var assert = require('assert');

//
// Reajusta o salário
//
var reajustar_salario = function(salario, reajuste) {
    return salario * reajuste;
}


// Este é o nosso teste.
// Sabemos que 1000 * 0.15 = 150, logo
// a função `reajustar_salario` deve ter o valor igual a 150.
try {
    assert.equal(150, reajustar_salario(1000, 0.15));
} catch(e) {
    console.log(e);
}

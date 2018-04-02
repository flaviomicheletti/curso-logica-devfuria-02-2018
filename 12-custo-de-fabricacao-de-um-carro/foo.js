var assert = require('assert');

//
// Retorna o custo final da fabricação de um carro
//
var custoFinal = function(custoFabrica) {
    var custoDistribuidor = custoFabrica * 0.28;
    var custoImpostos     = custoFabrica * 0.45;

    return custoFabrica + custoDistribuidor + custoImpostos;
}

//
// Seu teste
//
try {
    assert.equal(17300, custoFinal(10000));
} catch(e) {
    console.log(e);
}

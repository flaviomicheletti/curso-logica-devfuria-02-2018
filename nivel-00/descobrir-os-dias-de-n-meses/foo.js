var assert = require('assert');

//
// Função que retorna o número de dias
//
var dias = function(n_meses) {
    return n_meses * 30;
}

//
// Seu teste
//
try {
    assert.equal(210, dias(7), "deve retornar a total de dias");
} catch(e) {
    console.log(e);
}
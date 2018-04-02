var assert = require('assert');

//
// Seu código
//
var somarLista = function(lista){
    var soma = 0;
    for(var i = 0; i < lista.length; i++){
        soma += lista[i];
    }
    return soma;
}
//
// Seu teste
//
try {

    lista = [10, 20, 30, 0]
    assert.equal(60, somarLista(lista));

} catch(e) {
    console.log(e);
}

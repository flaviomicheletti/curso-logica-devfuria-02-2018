var assert = require('assert');

// Função que descobre se um número é ou não maior que 10
//
// retornará 1 caso seja maior
// retornará 0 caso seja menor
//
var ehMaiorQue10 = function(valorQualquer) {
    if (valorQualquer > 10) {
        return 1;
    } else {
        return 0;
    }
}

//
// Testes
//
try {
    assert.equal(1, ehMaiorQue10(17));
    assert.equal(0, ehMaiorQue10(9));
} catch(e) {
    console.log(e);
}

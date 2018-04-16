var assert = require('assert');

//
// Criamos um objeto vazio a partir do tipo primitivo `Object`
//
var juros = new Object();

//
// Definimos um método para o objeto recém criado
//
juros.simples = function() {

    //
    // Aqui entra a sua lógica
    //
    return this.capital * this.taxa * this.periodo;

}

try {

    //
    // Teste
    //

    // Repare que NÂO instanciamos o objeto
    juros.capital = 16000;
    juros.taxa = 0.04;
    juros.periodo = 4;
    assert.equal(2560, juros.simples());

} catch(e) {
    console.log(e);
}

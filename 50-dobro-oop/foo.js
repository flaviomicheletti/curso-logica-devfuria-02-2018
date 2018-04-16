var assert = require('assert');

//
// Está é nossa classe
//
function Calc(){

    //
    // Este é o método da classe
    //
    this.dobro = function(num){

        //
        // aqui entra a sua lógica
        //
        return num * 2;

    }

};

try {

    var calc = new Calc();
    assert.equal(10, calc.dobro(5));

} catch(e) {
    console.log(e);
}

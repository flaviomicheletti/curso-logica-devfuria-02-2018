var assert = require('assert');

//
// Um objeto literal
//
var Calc = {

    // Método
    antecessor: function(num){
        // sua lógica
        return num - 1;

    }, // reparou na vírgula ?

    // Método
    sucessor: function(num){
        // sua lógica
        return num + 1;

    }
}

try {

    assert.equal(9, Calc.antecessor(10));
    assert.equal(11, Calc.sucessor(10));

} catch(e) {
    console.log(e);
}

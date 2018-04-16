var assert = require('assert');

//
// Classe
//
function Area(){

    //
    // Método
    //
    this.quadrada = function(){
        // sua lógica
        return this.lado1 * this.lado2;
    }

    //
    // Método
    //
    this.cubica = function(){
        // sua lógica
        return this.lado1 * this.lado2 * this.lado3;
    }
};


try {

    var area = new Area();

    // testando a área quadrada
    area.lado1 = 3;
    area.lado2 = 9;
    assert.equal(27, area.quadrada());

    // testando a área cúbica
    area.lado1 = 3;
    area.lado2 = 6;
    area.lado3 = 2;
    assert.equal(36, area.cubica());

} catch(e) {
    console.log(e);
}

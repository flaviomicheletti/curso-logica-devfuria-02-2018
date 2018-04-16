var assert = require('assert');

function Triangulo(a, b, c) {
    this.a = a;
    this.b = b;
    this.c = c;
    this.validarForma = function() {

        //
        // Aqui entra a lógica de seu programa!
        //
        if (this.a < (this.b + this.c)) {
            if (this.b < (this.a + this.c)) {
                if (this.c < (this.a + this.b)) {
                    return true;
                }
            }
        }
        return false;

    };
};

try {

    // Caso positivo
    var triangulo = new Triangulo(3, 4, 5);
    assert.equal(true, triangulo.validarForma());

    // Caso negativo
    var triangulo = new Triangulo(1, 4, 5);
    assert.equal(false, triangulo.validarForma());

} catch(e) {
    console.log(e);
}

var assert = require('assert');

//
// Classe Votos
//
function Votos(total_eleitores) {
    this.total_eleitores = total_eleitores,
    this.validos = 0,
    this.brancos = 0,
    this.nulos   = 0;

    this.percValidos = function() {
        return this.validos / this.total_eleitores;
    }

    this.percBrancos = function() {
        return this.brancos / this.total_eleitores;
    }

    this.percNulos = function() {
        return this.nulos / this.total_eleitores;
    }

}

//
// Testes
//
try {

    var votos = new Votos(1000);
    votos.validos = 800;
    votos.brancos = 150;
    votos.nulos   = 50;

    assert.equal(0.8,  votos.percValidos());
    assert.equal(0.15, votos.percBrancos());
    assert.equal(0.05, votos.percNulos());
} catch(e) {
    console.log(e);
}

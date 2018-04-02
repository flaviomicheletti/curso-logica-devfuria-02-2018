var assert = require('assert');

var vetor = [1, 2, 3, 4, 5]

//
// Testes
//
try {

    assert.equal(1, vetor[0]);
    assert.equal(2, vetor[1]);
    assert.equal(3, vetor[2]);
    assert.equal(4, vetor[3]);
    assert.equal(5, vetor[4]);

} catch(e) {
    console.log(e);
}

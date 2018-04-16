var assert = require('assert');

function fatorial(n) {
    if (n == 0) {
        return 1;
    }
    var resp = n;
    while (n > 2) {
        resp *= --n;
    }
    return resp;
}

try {

    assert.equal(1, fatorial(0));
    assert.equal(1, fatorial(1));
    assert.equal(2, fatorial(2));
    assert.equal(6, fatorial(3));
    assert.equal(6, fatorial(3));
    assert.equal(24, fatorial(4));
    assert.equal(120, fatorial(5));
    assert.equal(720, fatorial(6));

} catch(e) {
    console.log(e);
}
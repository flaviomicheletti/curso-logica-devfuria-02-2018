var assert = require('assert');

var haDuplicados = function(arr) {
    var i;
    //
    // Vamos percorrer o array e...
    //
    for(i = 0; i < arr.length; i++) {
        // ..se o índice do valor atual "indexOf(arr[i])"
        // for diferente do índice corrente "i"
        // retornamos "true"
        if(arr.indexOf(arr[i]) != i) {
            return true;
        };
    }
    // Se não houver repetido
    // retornamos false
    return false;
}


//
// Seu teste
//
try {

    assert.equal(true, haDuplicados([100, 200, 300, 300, 500]));
    assert.equal(false, haDuplicados([100, 200, 300, 400, 500]));

} catch(e) {
    console.log(e);
}

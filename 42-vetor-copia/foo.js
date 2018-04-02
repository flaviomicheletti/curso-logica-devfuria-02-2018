var assert = require('assert');

//
// Seu código
//
var clonar = function(data){
    var clone = [];
    for(var i = 0; i < data.length; i++){
        clone.push(data[i]);
    }
    return clone;
}
//
// Seu teste
//
try {

    assert.deepEqual([10, 20, 30, 0], clonar([10, 20, 30, 0]));

} catch(e) {
    console.log(e);
}

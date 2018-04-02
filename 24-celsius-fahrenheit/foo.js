var assert = require('assert');


//
// Converte fahrenheit em celsius
//
function toCelsius(fahrenheit){
    return 5 * (fahrenheit - 32) / 9;
}

//
// Converte celsius em fahrenheit
//
function toFahrenheit(celsius) {
    return celsius / 5 * 9 + 32;
}

//
// Testes
//
try {
    var celsius    = 100
    var fahrenheit = 212

    assert.equal(celsius, toCelsius(fahrenheit), "msg");
    assert.equal(fahrenheit, toFahrenheit(celsius), "msg");
} catch(e) {
    console.log(e);
}

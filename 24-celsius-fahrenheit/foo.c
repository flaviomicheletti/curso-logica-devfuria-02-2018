#include <stdio.h>
#include <assert.h>

//
// Converte fahrenheit em celsius
//
int toCelsius(int fahrenheit) {
    return 5 * (fahrenheit - 32) / 9;
}

//
// Converte celsius em fahrenheit
//
int toFahrenheit(int celsius) {
    return celsius / 5 * 9 + 32;
}

//
// Testes
//
int main (){

    int celsius    = 100;
    int fahrenheit = 212;

    assert(celsius == toCelsius(fahrenheit));
    assert(fahrenheit == toFahrenheit(celsius));

    return 0;
}

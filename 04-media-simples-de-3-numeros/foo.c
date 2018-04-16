#include <stdio.h>
#include <assert.h>

//
// média simples (aritmética) de 3 valores quaisquer
//
int media(int valor1, int valor2, int valor3) {
    return (valor1 + valor2 + valor3) / 3;
}

//
// Seu teste
//
int main (){
    assert(7 == media(6, 7, 8));
    return 0;
}
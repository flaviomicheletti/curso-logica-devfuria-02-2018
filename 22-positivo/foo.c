#include <stdio.h>
#include <assert.h>

// Função que descobre se um número é positivo ou negativo
//
// retornará 1 caso positivo
// retornará 0 caso negativo
//
int ehPositivo(int numero) {
    if(numero >= 0) {
       return 1;
    } else {
       return 0;
    }
}

//
// Testes
//
int main (){

    assert(ehPositivo(100) == 1);
    assert(ehPositivo(0) == 1);
    assert(ehPositivo(-100) == 0);

    return 0;
}

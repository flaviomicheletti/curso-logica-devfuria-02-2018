#include <stdio.h>
#include <assert.h>

//
// Função que retorna o dobro de um número qualquer
//
int dobro(int num) {
    return 2 * num; // <--- olha aqui o resultado
}

//
// Testes
//
int main (){

    assert(10 == dobro(5));
    assert(12 == dobro(6));

    return 0;
}
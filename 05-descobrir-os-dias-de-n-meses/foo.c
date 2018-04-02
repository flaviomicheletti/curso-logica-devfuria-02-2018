#include <stdio.h>
#include <assert.h>

//
// Função que retorna o número de dias
//
int dias(int n_meses) {
    return n_meses * 30;
}

//
// Seu teste
//
int main (){
    assert(210 == dias(7));
    return 0;
}
#include <stdio.h>
#include <assert.h>

// Função que descobre se um número é ou não maior que 10
//
// retornará 1 caso seja maior
// retornará 0 caso seja menor
//
int ehMaiorQue10(int valorQualquer) {
    if (valorQualquer > 10) {
        return 1;
    } else {
        return 0;
    }
}

//
// Testes
//
int main (){

    assert(1 == ehMaiorQue10(17));
    assert(0 == ehMaiorQue10(9));

    return 0;
}

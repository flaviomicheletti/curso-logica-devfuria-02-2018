#include <stdio.h>
#include <assert.h>

//
// Função que descobre se um número é par ou ímpar
//
int ehPar(int numero) {
	if (numero % 2 == 0) {
	    return 1;
	} else {
    	return 0;
	}
}

//
// Testes
//
int main (){

    assert(ehPar(8) == 1);
    assert(ehPar(7) == 0);
    assert(ehPar(0) == 1);

    return 0;
}

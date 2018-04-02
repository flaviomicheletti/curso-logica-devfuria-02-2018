#include <stdio.h>
#include <assert.h>

//
// Função que retorna o valor da área
//
int area(int lado1, int lado2) {
	return lado1 * lado2;
}

//
// testes
//
int main (){
    assert(27 == area(3, 9));
    return 0;
}
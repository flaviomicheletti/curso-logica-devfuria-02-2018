#include <stdio.h>
#include <assert.h>

// as funções são tão pequenas e tão concisas que nem precisam de comentários

int somar(int num, int add) {
    return num + add;
}

int subtrair(int num, int sub) {
    return num - sub;
}

int multiplicar(int num, int mult) {
    return num * mult;
}

int dividir(int num, int divisor) {
    return num / divisor;
}

//
// Testes
//
int main (){
    
    int num = 10;
    
	assert(12 == somar(num, 2));
	assert(8 == subtrair(num, 2));
	assert(20 == multiplicar(num, 2));
	assert(5 == dividir(num, 2));
    
	return 0;
}

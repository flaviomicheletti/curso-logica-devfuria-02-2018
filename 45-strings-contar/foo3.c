#include <stdio.h>
#include <assert.h>

//
// função para contar caracteres de determinada string
//
unsigned int strlen( string s) {
    int i;
    for (i = 0; s[i] != '\0'; ++i) ;
    return i;
}

//
// Início do programa
// e seus testes.
int main() {
    char ola[] = "palavra";
    assert(7 == contaChar(ola));
    return 0;
}

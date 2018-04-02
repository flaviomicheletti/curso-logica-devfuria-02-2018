#include <stdio.h>
#include <assert.h>

//
// função para contar caracteres de determinada string
//
int contaChar(const char *str) {
    int i = 0;
    for (; str[i] != 0; ++i);
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

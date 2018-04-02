#include <stdio.h>
#include <assert.h>

//
// função para contar caracteres de determinada string
//
int contaChar(char str[]) {
    int i = 0;

    do {
        ++i;
    } while (str[i] != 0);

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

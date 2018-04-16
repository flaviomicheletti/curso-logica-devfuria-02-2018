#include <stdio.h>
#include <assert.h>

//
// função para contar caracteres de determinada string
//
int contaCaracter(char str[]) {
    int i = 0;

    do {
        ++i;
    } while (str[i] != 0);

    return i;
}

//
// Início do programa (testes).
//
int main() {
    char s[] = "palavra";
    assert(7 == contaCaracter(s));
    return 0;
}

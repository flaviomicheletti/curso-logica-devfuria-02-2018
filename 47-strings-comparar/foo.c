#include <stdio.h>
#include <assert.h>

//
// Função que compara se duas string são iguais
//
int compararStrings(char str1[], char str2[]) {
    int i = 0;

    do {
        if(str1[i] != str2[i]) {
            return 2;
        }
        i++;
    } while(str1[i] != 0);

    return 1;
}


//
// Testes
//
int main() {

    char ola[]  = "ola";
    char ola2[] = "ola";
    assert(1 == compararStrings(ola, ola2));

    return 0;
}

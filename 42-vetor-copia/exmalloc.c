#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int main() {

    int i, *vetor1, *vetor2;

    // alocando memória
    vetor1 = (int *) malloc(sizeof(int) * 3);
    vetor2 = (int *) malloc(sizeof(int) * 3);

    // inicializando o primeiro vetor
    vetor1[0] = 10;
    vetor1[1] = 20;
    vetor1[2] = 30;

    // copiando o vetor
    for(i = 0; i < 3; i++) {
        vetor2[i] = vetor1[i];
    }

    //
    // Testes
    //
    assert(vetor2[0] == 10);
    assert(vetor2[1] == 20);
    assert(vetor2[2] == 30);

    return 0;
}


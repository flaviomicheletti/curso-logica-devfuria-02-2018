#include <stdio.h>
#include <assert.h>

int main() {

    int vet[5], tamanho = 5; // vetor e tamanho do vetor
    int i, j, resp = 0;      // auxiliares


    // Aqui entra a lógica do programa.
    vet[0] = 100;
    vet[1] = 200;
    vet[2] = 300;
    vet[3] = 300; // valor repetido
    vet[4] = 500;

    for (i = 0; i <= tamanho; i++) {
        for (j = i + 1; j < tamanho; j++) {
            if (vet[j] == vet[i]) {
                resp = 1; // há um valor repetido
            }
        }
    }

    //
    // Teste
    //
    assert(1 == resp);

    return (0);
}

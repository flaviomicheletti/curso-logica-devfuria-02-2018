#include <stdio.h>
#include <assert.h>

int main() {
    int vetor[5];
    int i;

    // Aqui entra a lógica do programa.
    while(i < 5){
        vetor[i] = i + 1;
        i++;
    }


    //
    // Testes
    //
    assert(1 == vetor[0]);
    assert(2 == vetor[1]);
    assert(3 == vetor[2]);
    assert(4 == vetor[3]);
    assert(5 == vetor[4]);
    return 0;
}

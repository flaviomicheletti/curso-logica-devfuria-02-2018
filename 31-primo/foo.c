#include <stdio.h>
#include <assert.h>

// Função que descobre se dois números possuem divisão exata.
//
// Retorna:
//   0 para false
//   1 para true
//
int ehDivisaoExata(int dividendo, int divisor) {
    return (dividendo % divisor) == 0;
}

// Função que descobre se o número é ou não primo.
//
// Retorna:
//   0 para false (composto)
//   1 para true  (primo)
//
int ehPrimo(int num) {
    int i, quantDivisores = 0;

    for(i = 1; i <= num; i++) {
        if (ehDivisaoExata(num, i)) {
            quantDivisores++;
        }
    }

    if (quantDivisores == 2) {
        return 1;
    } else {
        return 0;
    }
}


//
// Testes
//
int main (){

    assert(1 == ehDivisaoExata(3, 1));
    assert(1 == ehDivisaoExata(3, 3));
    assert(0 == ehDivisaoExata(3, 2));

    assert(1 == ehPrimo(2));
    assert(1 == ehPrimo(3));
    assert(1 == ehPrimo(5));
    assert(1 == ehPrimo(7));
    assert(1 == ehPrimo(11));
    assert(1 == ehPrimo(13));

    assert(0 == ehPrimo(4));
    assert(0 == ehPrimo(6));
    assert(0 == ehPrimo(9));
    assert(0 == ehPrimo(10));
    assert(0 == ehPrimo(12));

    // E aí, vamos testar até aonde?
    // Difícil determinar até onde devem ir os testes
    // nestes casos.

    return 0;
}

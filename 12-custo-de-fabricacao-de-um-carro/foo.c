#include <stdio.h>
#include <assert.h>

//
// Retorna o custo final da fabricação de um carro
//
float custoFinal(int custoFabrica) {
    float custoDistribuidor = custoFabrica * 0.28f;
    float custoImpostos     = custoFabrica * 0.45f;
    return custoFabrica + custoDistribuidor + custoImpostos;
}

//
// Teste
//
int main() {

    assert(17300.0f == custoFinal(10000));

    return 0;

}

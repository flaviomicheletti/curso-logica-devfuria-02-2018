#include <iostream>
#include <assert.h>

//
// Classe Juros
//
class Juros {
public:
    float capital, taxa;
    int periodo;

    // Função que retorna o juros simples
    // J = c . i . n
    int simples() {
        return capital * taxa * periodo;
    }
};

//
// Teste Unitário
//
void testJurosSimples() {

    Juros juros;

    juros.capital = 16000;
    juros.taxa    = 0.04;
    juros.periodo = 4;

    assert(2560 == juros.simples());
}

//
// Início do programa
//
int main() {
    // Executando o teste unitário
    testJurosSimples();
    return 0;
}

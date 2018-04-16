#include <iostream>
#include <assert.h>

//
// Classe Calc
//
class Calc {
public:

    // retorna o antecessor de um número
    int antecessor(int num) {
        // sua lógica
        return num - 1;

    }

    // retorna o sucessor de um número
    int sucessor(int num) {
        // sua lógica
        return num + 1;

    }
};

//
// Testes unitários...
//
void testAntecessor() {
    Calc c;
    assert(9 == c.antecessor(10));
}

void testSucessor() {
    Calc c;
    assert(11 == c.sucessor(10));
}
// ...fim dos testes.

//
// Início do programa
//
int main() {
    testAntecessor();
    testSucessor();
    return 0;
}

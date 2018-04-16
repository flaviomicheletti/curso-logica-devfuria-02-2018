#include <iostream>
#include <assert.h>

//
// Classe Calc
//
class Calc {
public:
    int dobro(int num) {
        return num * 2;
    }
};

//
// Teste unitário
//
void testDobro() {
    Calc c;
    assert(10 == c.dobro(5));
}

//
// Início do programa
//
int main() {
    testDobro();
    return 0;
}

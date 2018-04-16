#include <iostream>
#include <assert.h>

//
// Classe Triângulo
//
class Triangulo {
public:
    int a, b, c;

    //
    // Verifica se as medidas compõem ou não um triângulo
    //
    bool validarForma() {
        if (a < (b + c)) {
            if (b < (a + c)) {
                if (c < (a + b)) {
                    return true;
                }
            }
        }
    }
};

//
// Teste unitários...
//
void testValidarFormaCasoPositivo() {
    Triangulo triangulo;
    triangulo.a = 3;
    triangulo.b = 4;
    triangulo.c = 5;
    assert(triangulo.validarForma());
}

void testValidarFormaCasoNegativo() {
    Triangulo triangulo;
    triangulo.a = 1;
    triangulo.b = 4;
    triangulo.c = 5;
    assert(!triangulo.validarForma());
}

//
// Início do programa
//
int main() {
    testValidarFormaCasoPositivo();
    testValidarFormaCasoNegativo();
    return 0;
}

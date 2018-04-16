#include <iostream>
#include <assert.h>

//
// Classe Area
//
class Area {
public:
    int lado1, lado2, lado3;

    // retorna a área quadrada
    int quadrada() {
        return lado1 * lado2;
    }

    // retorna a área cúbica
    int cubica() {
        return lado1 * lado2 * lado3;
    }
};

//
// Testes unitários...
//
void testAreaQuadrada() {
    Area area;

    area.lado1 = 3;
    area.lado2 = 9;
    assert(27 == area.quadrada());
}

void testAreaCubica() {
    Area area;

    area.lado1 = 3;
    area.lado2 = 6;
    area.lado3 = 2;
    assert(36 == area.cubica());
}

//
// Início do programa
//
int main() {
    testAreaQuadrada();
    testAreaCubica();
    return 0;
}

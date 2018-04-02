#include <math.h>
#include <stdio.h>
#include <assert.h>

// Retorna o valor de delta
int delta(int a, int b, int c) {
    return b * b -4 * a * c;
}

// Retorna o valor da primeira raiz
int raiz1(int a, int b, int c) {
    return (-b + sqrt(delta(a, b, c))) / 2 * a;
}

// Retorna o valor da segunda raiz
int raiz2(int a, int b, int c) {
    return (-b - sqrt(delta(a, b, c))) / 2 * a;
}

//
// Testes
//
int main() {

    int a, b, c;

    a = 1; b = 0; c = -16;
    assert(64 == delta(a, b, c));
    assert(4 == raiz1(a, b, c));
    assert(-4 == raiz2(a, b, c));

    return 0;
}

#include <stdio.h>
#include <assert.h>

//
// Função mmc
//
int mmc(int num1, int num2) {

    int resto, a, b;

    a = num1;
    b = num2;

    do {
        resto = a % b;

        a = b;
        b = resto;

    } while (resto != 0);

    return ( num1 * num2) / a;
}

//
// Testes
//
int main() {

    // 2 * 2 * 3 * 5 = 60
    assert(60 == mmc(12, 20));

    return 0;
}

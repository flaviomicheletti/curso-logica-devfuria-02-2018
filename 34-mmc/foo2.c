#include <stdio.h>
#include <assert.h>

//
// Função mmc
//
int mmc(int num1, int num2) {

    int mmc, aux, i;

    for (i = 2; i <= num2; i++) {
        aux = num1 * i;
        if ((aux % num2) == 0) {
            mmc = aux;
            i = num2 + 1;
        }
    }
    return mmc;
}


//
// Testes
//
int main() {

    // 2 * 2 * 3 * 5 = 60
    assert(60 == mmc(12, 20));

    return 0;
}

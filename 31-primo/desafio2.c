#include <stdio.h>
#include <assert.h>

int ehPrimo(int num) {
    int y;
    for (y = 2; y <= num - 1; y++) {
        if (num % y == 0)
            return 0;
    }
    return 1;
}

int main() {
    assert(1 == ehPrimo(2));
    assert(1 == ehPrimo(3));
    return 0;
}
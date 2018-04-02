#include <stdio.h>
#include <assert.h>

int ehPrimo(int num) {
    int i, count = 0;

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            count++;
            break;
        }
    }

    if (count == 0)
        return 1;
    else
        return 0;

}

int main() {
    assert(1 == ehPrimo(2));
    assert(1 == ehPrimo(3));
    assert(0 == ehPrimo(4));
    return 0;
}

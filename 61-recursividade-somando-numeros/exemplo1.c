#include <stdio.h>
#include <assert.h>

int add(int n) {
    int sum;

    if (n == 1)
        return 1;
    else
        sum = n + add(n - 1);

    return (sum);
}


void main() {
    int sum;
    assert(1 == add(1));
    assert(3 == add(2));
    assert(6 == add(3));
    assert(10 == add(4));
    assert(15 == add(5));
    assert(21 == add(6));
}
#include <stdio.h>
#include <assert.h>

int add(int n) {
    if (n != 0)
        return n + add(n-1);
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
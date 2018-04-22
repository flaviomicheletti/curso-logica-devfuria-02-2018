#include <stdio.h>
#include <assert.h>

int add(int n) {
    return (n * (n + 1)) / 2;
}

void main() {
    assert(0 == add(0));
    assert(1 == add(1));
    assert(3 == add(2));
    assert(6 == add(3));
    assert(10 == add(4));
    assert(15 == add(5));
    assert(21 == add(6));
}
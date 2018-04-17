#include <stdio.h>
#include <assert.h>

//
// https://youtu.be/YEeYk9uEqEI
//
int add(int n) {
    if (n == 0)
        return 0;
    else
        return n + add(n - 1);
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
#include <stdio.h>
#include <assert.h>

//
// https://pt.wikihow.com/Somar-os-N%C3%BAmeros-Inteiros-de-1-at%C3%A9-N
//
int add(int n) {
    return (n * (n + 1)) / 2;
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
#include <stdio.h>
#include <assert.h>

void main() {

    int x, *y;

    x = 10;
    y = &x;
    x = 20;

    assert(x == 20);
    assert(*y == 20);
}

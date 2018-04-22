#include <stdio.h>
#include <assert.h>

void troca (int a, int b) {
     int aux;

     aux = a;
     a   = b;
     b   = aux;

    assert(a == 555);
    assert(b == 999);
}

int main() {
    troca(999, 555);
    return 0;
}

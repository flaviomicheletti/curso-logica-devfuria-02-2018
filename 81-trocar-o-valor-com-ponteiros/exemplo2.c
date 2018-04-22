#include <stdio.h>
#include <assert.h>

void troca (int *a, int *b) {
     int aux;

     aux = *a;
     *a  = *b;
     *b  = aux;
}

int main() {
    int a = 999;
    int b = 555;

    troca(&a, &b);

    assert(a == 555);
    assert(b == 999);
    return 0;
}
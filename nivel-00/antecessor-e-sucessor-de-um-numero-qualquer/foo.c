#include <stdio.h>
#include <assert.h>

int antecessor(int numero) {
    return numero - 1;
}

int sucessor(int numero) {
    return numero + 1;
}

int main (){

    //
    // Testes
    //
    assert(9 == antecessor(10));
    assert(11 == sucessor(10));

    return 0;
}
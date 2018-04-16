#include <stdio.h>

int foo(int i) {
    for(; i < 4; i++) {
        printf("%d\n", i);
    }
}

int main() {
    foo(0);
    return 0;
}
#include <stdio.h>

int foo(int i) {
    if (i < 4) {
        printf("%d\n", i);
        foo(i + 1);
    }
}

int main() {
    foo(0);
    return 0;
}
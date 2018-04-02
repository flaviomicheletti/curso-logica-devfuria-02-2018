#include<stdio.h>
#include<string.h>
#include<assert.h>

int main() {

    char str[] = "lamina";
    char temp;
    int i, j;

    i = 0;
    j = strlen(str) - 1;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }


    //
    // Teste
    //
    assert(strcmp("animal", str) == 0);

    return (0);

}

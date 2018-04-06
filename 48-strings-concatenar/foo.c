#include<stdio.h>
#include<string.h>
#include<assert.h>

//
// Primeira solução
//
void concatenar1(char s1[], char s2[]) {
    int i, j;

    // Olha que laço for maroto!!!
    // Com ele eu vou detreminar o tamanho da primeira string.
    for (i = 0; s1[i] != '\0'; ++i);
    /* Descomente o `printf` para ver o tamanho da primeira string. */
    // printf("%d \n", i);

    for (j = 0; s2[j] != '\0'; ++j, ++i) {
        s1[i] = s2[j];
    }
    s1[i] = '\0';
}

//
// Segunda solução (versão ponteiros)
//
char* concatenar2(char *s1, char *s2) {
    int i, j;

    for (i = 0; s1[i] != '\0'; ++i);
    for (j = 0; s2[j] != '\0'; ++j, ++i) {
        s1[i] = s2[j];
    }
    s1[i] = '\0';
    return s1;
}

//
// Terceira solução
//
void concatenar3(char s[], char t[]) {
    int i = 0, j = 0;

    while (s[i] != '\0') {
        i++;
    }

    while ((s[i++] = t[j++]) != '\0');
}

//
// Quarta solução
//
void concatenar4(char s1[], char s2[]) {
    int i, j;

    i = strlen(s1);

    for (j = 0; s2[j] != 0; i++, j++) {
        s1[i] = s2[j];
    }

    s1[i] = 0;
}

//
// Quinta solução
//
void concatenar5(char *original, char *add) {
    while (*original)
        original++;

    while (*add) {
        *original = *add;
        add++;
        original++;
    }
    *original = '\0';
}

//
// Sexta solução
//
void concatenar6(char str1[], char str2[]) {
    strcat(str1, str2);
}


//
// Testes
//
int main() {

    char str1[] = "abc";
    char str2[] = "defg";

    concatenar1(str1, str2);
    assert(strcmp("abcdefg", str1) == 0);

    return (0);
}

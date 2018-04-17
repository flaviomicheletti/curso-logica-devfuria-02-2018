#include <stdio.h>
#include <assert.h>

// [7] 0, 1, 2, 3, 4, 5, 6,
// [6] 0, 1, 2, 3, 4, 5,
// [5] 0, 1, 2, 3, 4,
// [4] 0, 1, 2, 3,
// [3] 0, 1, 2,
// [2] 0, 1,
// [1] 0,
void bubble_sort (int vetor[], int n) {
    int k, j, aux;

    for (k = n - 1; k > 0; k--) {
        printf("\n[%d] ", k);

        for (j = 0; j < k; j++) {
            printf("%d, ", j);

            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main() {
    //
    // Ordenando o vetor
    //
    printf("\nPor dentro da implementação....");
    int vetor[8] = {5, 3, 2, 4, 7, 1, 0, 6};
    bubble_sort(vetor, 8);

    //
    // Mostrar o vetor
    //
    printf("\n\nResultado final...\n");
    int i;
    for (i = 0; i < 8; i++) {
       printf("%d, ", vetor[i]);
    }
    printf("\n\n");
    return 0;
}
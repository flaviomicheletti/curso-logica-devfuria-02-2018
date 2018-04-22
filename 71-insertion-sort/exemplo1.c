#include <stdio.h>
#include <assert.h>

// [1] 0,
// [2] 1, 0,
// [3] 2,
// [4]
// [5] 4, 3, 2, 1, 0,
// [6] 5, 4, 3, 2, 1, 0,
// [7] 6,
void insertion_sort (int vetor[], int n) {
   int k, j, aux;

   for (k = 1; k <= n - 1; k++){
      printf("\n[%d] ", k);

      aux = vetor[k];
      j = k - 1;
      while (j >= 0 && aux < vetor[j]) {
         printf("%d, ", j);

         vetor[j+1] = vetor[j];
         j--;
      }

      vetor[j+1] = aux;
   }
}


int main() {
    //
    // Ordenando o vetor
    //
    printf("\nPor dentro da implementação....");
    int vetor[8] = {5, 3, 2, 4, 7, 1, 0, 6};
    insertion_sort(vetor, 8);

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
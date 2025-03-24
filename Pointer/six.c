#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;

    printf("Qual o tamanho do vetor dinamico: ");
    scanf("%d", &n);

    int *vector = (int *) malloc(n * sizeof(int));

    printf("\nVetor original: ");
    for (int i = 0; i < n; i++){
        vector[i] = i + 1;
        printf("%d ", vector[i]);
    }
    printf("\n");

    int m;
    printf("Digite o valor a ser removido: ");
    scanf("%d", &m);

    int newSize = 0;

    for (int i = 0; i < n; i++){
        if (vector[i] != m) {
            newSize++;
        }
    }

    int *vector2 = (int *) malloc(newSize * sizeof(int));

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (vector[i] != m) {
            vector2[j] = vector[i];
            j++;
        }
    }

    printf("\nVetor resultante: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", vector2[i]);
    }
    printf("\n");

    return 0;
}

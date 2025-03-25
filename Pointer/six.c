#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;

    printf("Qual o tamanho do vetor dinamico: ");
    scanf("%d", &n);

    int *vector = malloc(n * sizeof(int));
    if (vector == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

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

    int *vector2 = malloc(newSize * sizeof(int));
    if (vector2 == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (vector[i] != m) {
            vector2[j++] = vector[i];
        }
    }

    printf("\nVetor resultante: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", vector2[i]);
    }
    printf("\n");

    free(vector);
    free(vector2);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;

    printf("Qual o tamanho dos dois vetores dinamicos: ");
    scanf("%d", &n);

    int *vector = malloc(n * sizeof(int));
    if (vector == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    int *vector2 = malloc(n * sizeof(int));
    if (vector2 == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    int count = 1;

    printf("\nVetor1: ");
    for (int i = 0; i < n; i++){
        vector[i] = count++;
        printf("%d ", vector[i]);
    }
    printf("\n");

    printf("\nVetor2: ");
    for (int i = 0; i < n; i++){
        vector2[i] = count++;
        printf("%d ", vector2[i]);
    }
    printf("\n");

    int *vector3 = malloc(n * sizeof(int));
    if (vector3 == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf("\nVetor3 (soma): ");

    for (int i = 0; i < n; i++){
        vector3[i] = vector[i] + vector2[i];
        printf("%d ", vector3[i]);
    }
    printf("\n");

    free(vector);
    free(vector2);
    free(vector3);

    return 0;
}

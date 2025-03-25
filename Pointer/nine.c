#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int n;

    printf("Qual o tamanho do vetor dinamico: ");
    scanf("%d", &n);

    int *vector = malloc(n * sizeof(int));
    if (vector == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }
    
    srand(time(NULL)); 

    printf("\nVetor: ");
    for (int i = 0; i < n; i++){
        vector[i] = rand() % 100;
        printf("%d ", vector[i]);
    }
    printf("\n");

    int higher = vector[0], lower = vector[0];

    for (int i = 1; i < n; i++) {
        if (vector[i] > higher) {
            higher = vector[i];
        }
        if (vector[i] < lower) {
            lower = vector[i];
        }
    }

    printf("\nMaior elemento: %d\n", higher);
    printf("Menor elemento: %d\n", lower);

    free(vector);

    return 0;
}

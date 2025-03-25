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

    int j = 0;
    for (int i = n; i > 0; i--){
        vector[j++] = i;
    }
    
    printf("\nVetor invertido: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");

    free(vector);

    return 0;
}

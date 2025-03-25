#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, m;

    printf("Qual o tamanho do vetor1: \n");
    scanf("%d", &n);

    printf("Qual o tamanho do vetor2: \n");
    scanf("%d", &m);

    int *vetor1 = (int *)malloc(n * sizeof(int));
    if (vetor1 == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    int *vetor2 = (int *)malloc(m * sizeof(int));
    if (vetor2 == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    int count = 0;

    printf("Vetor1: \n");
    for (int i = 0; i < n; i++){
        vetor1[i] = ++count;
        printf("%d \n", vetor1[i]);
    }

    printf("Vetor2: \n");
    for (int i = 0; i < m; i++){
        vetor2[i] = ++count;
        printf("%d \n", vetor2[i]);
    }

    int *vetor3 = malloc((n + m) * sizeof(int));
    if (vetor3 == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i < n; i++){
        vetor3[i] = vetor1[i];
    }

    for (int i = 0; i < m; i++){
        vetor3[n + i] = vetor2[i];
    }

    printf("Vetor3 (Concatenado): \n");
    for (int i = 0; i < (n + m); i++){
        printf("%d ", vetor3[i]);
    }
    printf("\n");

    free(vetor1);
    free(vetor2);
    free(vetor3);

    return 0;
}

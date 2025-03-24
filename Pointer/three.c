#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;

    printf("Qual vai ser o tamanho do vetor de numeros reais (float)?\n");
    scanf("%d", &size);

    float *p = (float *) malloc(size * sizeof(float));

    if (p == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i < size; ++i) {
        printf("Qual vai ser o valor %d: ", i);
        scanf("%f", &p[i]);

        printf("Valor armazenado = %f, Endereco = %p\n", p[i], (void *)(p + i));
    }

    printf("\nValores armazenados:\n");
    for (int i = 0; i < size; ++i) {
        printf("%f ", p[i]);
    }
    printf("\n");

    free(p);
    return 0;
}

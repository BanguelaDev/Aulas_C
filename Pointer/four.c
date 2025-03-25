#include <stdio.h>
#include <stdlib.h>

int main() {

    int lines, columns;
    int **matrix;

    printf("Digite o numero de linhas \n");
    scanf("%d", &lines);

    printf("Digite o numero de colunas \n");
    scanf("%d", &columns);

    matrix = malloc(lines * sizeof (int *));

    if (matrix == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i < lines; i++) {
        matrix[i] = malloc(columns * sizeof(int));
        if (matrix[i] == NULL) {
            printf("Erro ao alocar memória para a linha %d.\n", i);
            return 1;
        }
    }

    int valor = 1;
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < columns; j++) {
            matrix[i][j] = valor++;
        }
    }

    printf("Matriz:\n");
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < lines; i++) {
        free(matrix[i]);
    }
    free(matrix);
   
    return 0;
}

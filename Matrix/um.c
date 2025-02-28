#include <stdio.h>

int main(){

    int matrix1[2][2] = {
        {1, 2},
        {3, 4}
    };

    int matrix2[2][2] = {
        {5, 6},
        {7, 8}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            int result = matrix1[i][j] + matrix2[i][j];
            printf("%d ", result);
        }
        printf("\n");
    }
}
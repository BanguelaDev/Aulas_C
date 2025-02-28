#include <stdio.h>

#define SIZE 3

int main(){

    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (i == j){
                printf("%d ", matrix[i][j]);
            }
        }
    }
}
#include <stdio.h>

int main(){

    int array[5] = {1, 2, 3, 4, 5};
    int *p;
    p = array;

    printf("%d \n", *p);

    for (int i = 0; i < 5; ++i) {
        printf("Elemento %d = %d (Endereco = %p)\n", i, *p,p);
        p++;
    }
    
    return 0;

}

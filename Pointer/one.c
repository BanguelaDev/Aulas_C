#include <stdio.h>

int main(){

    int x;
    int *p;
    p = &x;
    *p = x;
    
    printf("Valor de x = %d\n", x);
    printf("Valor de &x = %p\n", &x);
    printf("Valor de p = %p\n", p);
    printf("valor de *p = %d", *p);
}
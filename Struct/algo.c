#include <stdio.h>

struct product {
    char name[50];
    double price;
    int quantity;
};

int main() {
    
    struct product p;
    
    for (int i = 0; i < 3; i++) {
        scanf("%s %lf %d", p.name, &p.price, &p.quantity);
        printf("%s: R$ %.10g\n", p.name, p.price * p.quantity);
    }

    return 0;
}
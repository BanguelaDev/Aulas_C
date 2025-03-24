#include <stdio.h>
#define MAXSIZE 5

// LIFO (Last In, First Out)

int stack[MAXSIZE];
int i = 0;

void top() {
    printf("Valor no topo: %d \n", stack[i - 1]);
}

void push(int n) {

    if (i >= MAXSIZE) {
        printf("Erro: Pilha cheia! \n");
        return;
    }

    stack[i++] = n;
    printf("Elemento %d inserido \n", n);

    top();
}

void pop() {

    if (i == 0) {
        printf("Erro: Pilha vazia! \n");
        return;
    }

    printf("Elemento %d removido \n", stack[--i]);

    top();
}

int main() {

    push(10);
    push(20);
    pop();
    pop();
    pop();

    return 0;
}
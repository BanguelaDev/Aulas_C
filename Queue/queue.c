#include <stdio.h>
#define SIZE 3

int ini = 0;
int end = -1;
int queue[SIZE];

void Enqueue(int n) {
    if (end < SIZE - 1) {
        end++;
        queue[end] = n;
        printf("Elemento %d adicionado à fila\n", n);
    } else {
        printf("Fila cheia\n");
    }
}

void Dequeue() {
    if (ini <= end) {
        printf("Elemento %d removido da fila\n", queue[ini]);
        ini++;
    } else {
        printf("Fila vazia\n");
    }
}

int main() {
    
    Enqueue(10);
    Enqueue(20);
    Dequeue();
    Dequeue();
    Dequeue();

    return 0;
}

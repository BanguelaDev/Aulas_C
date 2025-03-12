#include <stdio.h>
#define SIZE 3

int ini = 0;
int end = 0;
int queue[SIZE];

void Enqueue(int n) {
    if ((end + 1) % SIZE == ini) {
        printf("A fila está cheia \n");
        return;
    }

    queue[end] = n;
    end = (end + 1) % SIZE;

    printf("Elemento %d inserido. \n", n);
}

void Dequeue() {
    if (ini == end) {
        printf("A fila está vazia \n");
        return;
    }

    printf("Elemento %d removido. \n", queue[ini]);
    ini = (ini + 1) % SIZE;
}

int main() {
    Enqueue(10);
    Enqueue(20);
    Dequeue();
    Dequeue();
    Dequeue();

    return 0;
}

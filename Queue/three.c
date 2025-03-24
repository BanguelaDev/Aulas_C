#include <stdio.h>
#define MAXSIZE 4

int queue[MAXSIZE];
int start = 0, end = 0, size = 0;

void enqueue(int n) {
    if (size == MAXSIZE) {
        printf("Erro: Fila cheia!\n");
        return;
    }

    queue[end] = n;
    end = (end + 1) % MAXSIZE;
    size++;

    printf("Elemento %d inserido.\n", n);
}

void dequeue() {
    if (size == 0) {
        printf("Erro: Fila vazia!\n");
        return;
    }

    printf("Elemento %d removido.\n", queue[start]);
    start = (start + 1) % MAXSIZE;
    size--;
}

int main() {

    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);

    dequeue();
    enqueue(5);

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();

    return 0;
}

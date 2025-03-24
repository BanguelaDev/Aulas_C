#include <stdio.h>
#define MAXSIZE 3

// FIFO (First In, First Out)

int queue[MAXSIZE];

int start = 0;
int end = 0;

void front() {
    printf("Inicio: %d \n", queue[start]);
}

void enqueue(int n) {

    if ((end + 1) % MAXSIZE == start) {
        printf("Erro: Fila cheia! \n");
        return;
    }

    queue[end] = n;
    end = (end + 1) % MAXSIZE;
    printf("Elemento %d inserido \n", n);

//  front();
}

void dequeue() {

    if (start == end) {
        printf("Erro: Fila vazia! \n");
        return;
    }

    printf("Elemento %d removido \n", queue[start]);
    start = (start + 1) % MAXSIZE;

//  front();
}

int main() {

    enqueue(9);
    enqueue(12);
    front();
    dequeue();
    front();

    return 0;
}
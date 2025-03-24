#include <stdio.h>
#define MAXSIZE 4

int queue[MAXSIZE];
int start = 0, end = 0;

void enqueue(int n) {
    if ((end + 1) % MAXSIZE == start) {
        printf("Erro: Fila cheia!\n");
        return;
    }
    queue[end] = n;
    end = (end + 1) % MAXSIZE;
}

int dequeue() {
    if (start == end) {
        printf("Erro: Fila vazia!\n");
        return -1;
    }
    int value = queue[start];
    start = (start + 1) % MAXSIZE;
    return value;
}

int main() {
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);

    enqueue(n1);
    enqueue(n2);
    enqueue(n3);

    printf("Numeros na ordem inversa: ");

    int reversed[MAXSIZE - 1];

    int count = 0;
    while (start != end) {
        reversed[count++] = dequeue();
    }

    for (int i = count - 1; i >= 0; i--) { 
        printf("%d ", reversed[i]);
    }

    return 0;
}

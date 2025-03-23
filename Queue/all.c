#include <stdio.h>
#define SIZE 5

int ini = 0;
int end = -1;
int queue[SIZE];

void Enqueue(int n){
    if (end >= SIZE - 1){
        printf("Erro: Fila cheia!\n");
        return;
    }

    queue[++end] = n;
    printf("Elemento %d inserido\n", n);
}

void Dequeue(){

    if (ini > end){
        printf("Erro: Fila vazia!\n");
        return;
    }
    
    printf("Elemento %d removido\n", queue[ini++]);
}

void Front(){
    printf("Início: %d\n", queue[ini]);
}

void listQueue(){
    if (ini > end) {
        printf("Erro: Fila vazia!\n");
        return;
    }

    for (int i = ini; i <= end; i++){
        printf("%d \n", queue[i]);
    }
}

void Inverse(){
    if (ini > end) {
        printf("Erro: Fila vazia!\n");
        return;
    }

    printf("Números na ordem inversa: ");

    for (int i = end; i >= ini; i--){
        printf("%d ", queue[i]);
    }

    printf("\n");
}

int main(){

    Enqueue(10);
    Enqueue(20);
    Front();
    Inverse();
    Dequeue();
    Front();
    Dequeue();
    Dequeue();
    listQueue();

    return 0;
}

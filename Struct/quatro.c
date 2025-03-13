#include <stdio.h>
#define SIZE 2

struct book{
    char title[50];
    char author[50];
    int year;
};

int main(){
    struct book books[SIZE];

    printf("Digite o titulo, autor e ano dos livros:\n");

    for (int i = 0; i < SIZE; i++){
        printf("Livro %d:\n", i + 1);
        printf("Titulo: ");
        scanf("%s", books[i].title);
        printf("Autor: ");
        scanf("%s", books[i].author);
        printf("Ano: ");
        scanf("%d", &books[i].year);
    }

    printf("\nDados dos livros:\n");
    
    for (int i = 0; i < SIZE; i++){
        printf("Titulo: %s, Autor: %s, Ano: %d \n", books[i].title, books[i].author, books[i].year);
    }

    return 0;
}

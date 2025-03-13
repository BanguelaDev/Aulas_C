#include <stdio.h>
#define SIZE 5

struct student{
    char name[50];
    double grade;
};

int main(){
    struct student students[SIZE];

    printf("Digite o nome e nota dos alunos:\n");

    for (int i = 0; i < SIZE; i++){
        printf("Aluno %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", students[i].name);
        printf("Nota: ");
        scanf("%lf", &students[i].grade);
    }

    printf("\nDados dos alunos:\n");

    double gradeAverage = 0;

    for (int i = 0; i < SIZE; i++){
        gradeAverage += students[i].grade;
    }

    gradeAverage /= SIZE;

    printf("Media das notas: %.10g", gradeAverage);

    return 0;
}

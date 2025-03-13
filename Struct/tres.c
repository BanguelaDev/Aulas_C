#include <stdio.h>
#define SIZE 4

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

    char *bestStudent;
    int higherGrade = 0;
    
    for (int i = 0; i < SIZE; i++){
        if (higherGrade < students[i].grade){
            higherGrade = students[i].grade;
            bestStudent = students[i].name;
        }
    }

    printf("Aluno/a com maior nota: %s", bestStudent);

    return 0;
}

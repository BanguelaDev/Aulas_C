#include <stdio.h>

struct student{
    char name[50];
    int age;
    double grade;
};

int main(){
   struct student students[3];

   printf("Digite o nome, idade e nota dos alunos:\n");
    
   for(int i = 0; i < 3; i++) {
       printf("Aluno %d:\n", i + 1);
       printf("Nome: ");
       scanf("%s", students[i].name);
       printf("Idade: ");
       scanf("%d", &students[i].age);
       printf("Nota: ");
       scanf("%lf", &students[i].grade);
   }
   
   printf("\nDados dos alunos:\n");
   
   for(int i = 0; i < 3; i++) {
       printf("Nome: %s, Idade: %d, Nota: %.10g\n", students[i].name, students[i].age, students[i].grade);
   }
   
   return 0;
}

#include <stdio.h>

struct student{
    char name[50];
    int age;
    double grade;
};

void printStudent(struct student s){
    printf("Nome: %s, Idade: %d, Nota: %.10g\n", s.name, s.age, s.grade);
}

int main(){
    struct student s1 = {"Joao", 20, 8.5};
    struct student s2 = {"Maria", 19, 9.0};
    struct student s3 = {"Pedro", 21, 7.5};

    printStudent(s1);
    printStudent(s2);
    printStudent(s3);

    return 0;
}

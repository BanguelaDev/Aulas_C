#include <stdio.h>

#define MAX_ALUNOS 3

struct student {
    char name[50];
    int age;
    double grade;
};

void getStudent(struct student s) {
    printf("Nome: %s, Idade: %d, Nota: %.2f\n", s.name, s.age, s.grade);
}

int main() {

    struct student dict[MAX_ALUNOS] = {
        {"Joao", 20, 8.5},
        {"Maria", 19, 9.0},
        {"Pedro", 21, 7.5}
    };

    for (int i = 0; i < MAX_ALUNOS; i++) {
        getStudent(dict[i]);
    }

    return 0;
}

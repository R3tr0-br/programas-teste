#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    float nota;
};

int main() {

    struct Aluno alunos[3];

    for (int i = 0; i < 3; i++) {
        printf("\n--- Cadastro do Aluno %d ---\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);

        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
    }

    for (int i = 0; i < 3; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Nota: %.2f\n", alunos[i].nota);
    }

    return 0;
}

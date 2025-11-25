#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int matricula;
    float nota;
};

int main() {
    struct Aluno alunos[100];
    int qtd = 0;
    int opcao;

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Inserir novo aluno\n");
        printf("2 - Listar alunos\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {

            if (qtd >= 100) {
                printf("Limite de alunos atingido!\n");
            } else {
                printf("\n--- Cadastro do Aluno %d ---\n", qtd + 1);

                printf("Nome: ");
                scanf(" %[^\n]", alunos[qtd].nome);

                printf("Matricula: ");
                scanf("%d", &alunos[qtd].matricula);

                printf("Nota: ");
                scanf("%f", &alunos[qtd].nota);

                qtd++;
                printf("Aluno cadastrado com sucesso!\n");
            }

        } else if (opcao == 2) {

            if (qtd == 0) {
                printf("Nenhum aluno cadastrado!\n");
            } else {
                printf("\n===== LISTA DE ALUNOS =====\n");
                for (int i = 0; i < qtd; i++) {
                    printf("\nAluno %d:\n", i + 1);
                    printf("Nome: %s\n", alunos[i].nome);
                    printf("Matricula: %d\n", alunos[i].matricula);
                    printf("Nota: %.2f\n", alunos[i].nota);
                }
            }

        } else if (opcao != 3) {
            printf("Opcao invalida!\n");
        }

    } while (opcao != 3);

    printf("Programa encerrado.\n");
    return 0;
}

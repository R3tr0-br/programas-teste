//3. Ponteiros e vetores
//Escreva um programa que:
//● Crie um vetor de 5 inteiros
//● Use apenas ponteiros (sem notação [ ]) para preencher os valores digitados pelo
//usuário
//● Depois percorra o vetor com aritmética de ponteiros e imprima todos os elementos

#include <stdio.h>

int main() {

    int vetor[5];
    int *p = vetor;

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%d", p + i);
    }

    printf("\nValores digitados:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }

    printf("\n");

    return 0;
}
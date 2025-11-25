#include <stdio.h>
#include <string.h>
// Crie um procedimento que receba um vetor de inteiros e um valor inteiro e preencha todas as posições do vetor com esse valor
// Depois, imprima o vetor no main

int preenche_vetor (int vetor[], int tamanho, int valor){

    for (i = 0; i < tamanho; i++){
        vetor[i] = valor;
    }
}
int main(void) {

    int vetor[10];
    int valor_a_preencher = 7;

    preenche_vetor(vetor, 10, valor_a_preencher);

    printf("Vetor preenchido: \n");
    for(int i = 0; i < 10; i++) {
        printf("%d", vetor[i]);

    }
    printf("\n");
    return 0;
}
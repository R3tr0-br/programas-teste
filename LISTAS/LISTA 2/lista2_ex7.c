//7. Vetor e Funções Combinadas
//Crie um programa que tenha:

//●	Um procedimento para ler os elementos de um vetor.

//●	Uma função que calcule a média aritmética dos valores.

//●	Um procedimento que imprima apenas os valores acima da média.

#include <stdio.h>

void lerVetor(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &v[i]);
    }
}

float calcularMedia(int v[], int n) {
    int soma = 0;

    for (int i = 0; i < n; i++) {
        soma += v[i];
    }

    return (float)soma / n;
}

void imprimirAcimaMedia(int v[], int n, float media) {
    printf("\nValores acima da media (%.2f):\n", media);
    for (int i = 0; i < n; i++) {
        if (v[i] > media) {
            printf("%d ", v[i]);
        }
    }
    printf("\n");
}

int main() {

    int n;

    printf("Quantos valores o vetor vai ter? ");
    scanf("%d", &n);

    int vetor[n];

    lerVetor(vetor, n);

    float media = calcularMedia(vetor, n);

    imprimirAcimaMedia(vetor, n, media);

    return 0;
}
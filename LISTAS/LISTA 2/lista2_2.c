//Escreva uma função que receba um vetor de float e seu tamanho e retorne o maior valor armazenado.
//Teste a função com um vetor de 10 números lidos do teclado.

#include <stdio.h>
#include <string.h>

int maior_vetor(float vetor[], int tamanho){
    float maior = vetor[0];

    for (int i = 1; i < tamanho; i++){
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}


int main(void) {

    float vetor[10];

    printf("Digite 10 número reais: \n");
    for(int i = 0; i < 10; i++){
        printf("Numero %i: ", i + 1);
        scanf("%f", &vetor[i]);
    } 
    float maior = maior_vetor(vetor, 10);

    printf("O maior valor do vetor é: %.2f\n", maior);
    return 0;
}
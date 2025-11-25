//6. Desafio final
//Escreva um programa que:
//● Leia n inteiros do usuário (tamanho definido em tempo de execução)
//● Aloque memória dinamicamente usando malloc
//● Use ponteiros para preencher os valores
//● Crie uma função que receba o vetor dinâmico e seu tamanho e retorne o maior valor
//encontrado
//● Mostre o resultado e libere a memória com free

#include <stdio.h>
#include <stdlib.h>

int maiorValor(int *v, int n) {
    int maior = *v;

    for (int i = 1; i < n; i++) {
        if (*(v + i) > maior) {
            maior = *(v + i);
        }
    }

    return maior;
}

int main() {

    int n;
    int *vetor;

    printf("Digite quantos numeros quer inserir: ");
    scanf("%d", &n);

    vetor = (int *) malloc(n * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%d", vetor + i);
    }

    int maior = maiorValor(vetor, n);

    printf("\nO maior valor digitado foi: %d\n", maior);

    free(vetor);

    return 0;
}

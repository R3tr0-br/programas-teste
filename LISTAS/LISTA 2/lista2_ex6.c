//6. Matriz – Diagonal principal
//Faça uma função que receba uma matriz 4x4 e retorne a soma dos elementos da diagonal principal.
//Teste a função com valores lidos do teclado.

#include <stdio.h>

int somaDiagonal(int m[4][4]) {

    int soma = 0;

    // i vai ser 0, 1, 2 e 3
    for (int i = 0; i < 4; i++) {
        soma += m[i][i];
    }

    return soma;
}

int main() {

    int matriz[4][4];
    int resultado;

    printf("Digite os valores da matriz 4x4:\n");

    for (int i = 0; i < 4; i++) {          
        for (int j = 0; j < 4; j++) {      
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    resultado = somaDiagonal(matriz);

    printf("\nA soma da diagonal principal é: %d\n", resultado);

    return 0;
}

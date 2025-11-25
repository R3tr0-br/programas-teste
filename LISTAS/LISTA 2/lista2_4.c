#include <stdio.h>

//Matriz – Soma dos elementos 
//Implemente uma função que receba uma matriz 3x3 e retorne a soma de todos os elementos. 
//No main, leia a matriz do teclado e mostre o resultado
int soma(int matriz[3][3]) {
    int total = 0;  
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            total += matriz[i][j];
        }
    }
    return total;
}

int main(void) {
    int matriz[3][3];
    
    printf("Digite os elementos da matriz:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int resultado = soma(matriz);

    printf("\nA soma de todos os elementos é: %d\n", resultado);

    return 0;
}

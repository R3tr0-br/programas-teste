#include <stdio.h>

void matriz_transposta(int matriz[3][3], int resultado[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultado[i][j] = matriz[j][i];
        }
    }
}

void mostramatriz(int matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int matriz[3][3];
    int resultado[3][3];

    printf("\nInsira os valores da matriz:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Posição[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    matriz_transposta(matriz, resultado);

    printf("\nMatriz original:\n");
    mostramatriz(matriz);

    printf("\nMatriz transposta:\n");
    mostramatriz(resultado);

    return 0; 
}

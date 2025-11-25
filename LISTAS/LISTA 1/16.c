//Usando vetores de vetores (matriz), estruture e apresente um tabuleiro de xadrez.
#include <stdio.h>
int main(void)
{
    int tabuleiro[8][8];

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++) {
            tabuleiro[i][j] = (i + j) % 2;
        }
    }

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}
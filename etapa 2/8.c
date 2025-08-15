//receba 2 números e diga qual é o maior
#include <stdio.h>
int main(void) {
    int x = 0;
    int y = 0;
    printf("Vou descobrir que numero eh maior! Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Agora, digite o segundo numero: ");
    scanf("%d", &y);

    if (x > y) {
        printf("O numero %d (x) é maior!!", x);
    }

    else if (x < y) {
        printf("O numero %d (y) é maior!!", y);
    }
    else{
        printf("Os numeros sao iguais!!");
    }
}
//receba 2 inteiros e exiba: soma, subtração, multiplicação, divisão, resto//
#include <stdio.h>
int main(void) {

    int num1;
    int num2;
    int operacao;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("%d \n", operacao = num1 + num2);
    printf("%d \n", operacao = num1 - num2);
    printf("%d \n", operacao = num1 * num2);
    printf("%d \n", operacao = num1 / num2);
    return 0;
}
#include <stdio.h>
int main(void){
    float num1;
    float num2 = 0;
    
    while(num1 != 0){
        printf("Insira o valor que voce deseja somar (0 para sair): ");
        scanf("%f", &num1);
        num2 += num1;
    }
    printf("Soma dos valores: %f \n", num2);

 }
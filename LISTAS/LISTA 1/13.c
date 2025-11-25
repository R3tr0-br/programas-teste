#include <stdio.h>
int main(void){


    float num1;
    float num2;
    char operador;

    printf("\nInsira o primeiro número: ");
    scanf("%f", &num1);

    printf("\nInsira o operador(+, -, *, /): ");
    scanf(" %c", &operador);

    printf("\nInsira o segundo número: ");
    scanf("%f", &num2);

    if (operador == '+'){
        printf("%f + %f = %f", num1, num2, num1 + num2);
    }
    else if (operador == '-'){
        printf("%f - %f = %f", num1, num2, num1 - num2);
    }
    else if (operador == '*'){
        printf("%f * %f = %f", num1, num2, num1 * num2);
    }
    else if (operador == '/'){
        printf("%f / %f = %f", num1, num2, num1 / num2);
    }
    else{
        printf("Nao foi possivel calcular!");
    }
}
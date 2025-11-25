//1. Ponteiro básico
//Escreva um programa que:
//● Crie uma variável int com valor 15
//● Crie um ponteiro que aponte para essa variável
//● Exiba na tela:
//○ O valor da variável
//○ O endereço da variável
//○ O valor armazenado no ponteiro
//○ O valor acessado pelo ponteiro

#include <stdio.h>

int main() {

    int x = 15;
    int *p;

    p = &x;

    printf("Valor da variavel x: %d\n", x);
    printf("Endereco da variavel x: %p\n", &x);
    printf("Valor armazenado no ponteiro p (endereco): %p\n", p);
    printf("Valor acessado pelo ponteiro (*p): %d\n", *p);

    return 0;
}

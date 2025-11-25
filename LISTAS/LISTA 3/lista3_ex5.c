//5. Ponteiros para ponteiros
//Crie um programa que:
//● Declare uma variável inteira x = 99
//● Crie um ponteiro p para x
//● Crie um ponteiro pp que aponte para p
//● Altere o valor de x para 123 usando pp (não use x nem p)
//● Imprima o novo valor de x

#include <stdio.h>

int main() {

    int x = 99;
    int *p = &x;
    int **pp = &p;

    **pp = 123;

    printf("Novo valor de x: %d\n", x);

    return 0;
}

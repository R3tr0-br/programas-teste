#include <stdio.h>
int main(void) {
    int idade = 0;
    int calc_idade = 0;
    printf("//////////////////////////////////////// \n");
    printf("Quantos dias vc viveu? Descubra agora!!! \n");
    printf("//////////////////////////////////////// \n"); 
    scanf("%d", &idade);
    calc_idade = idade * 365;
    printf("%d \n", calc_idade);
    return 0;
}
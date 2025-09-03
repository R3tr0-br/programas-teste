// receba raio e calcule o raio da circunferencia//
#include <stdio.h>
int main(void){
    const float pi = 3.14;
    int r;
    printf("Digite o raio da circuferencia: ");
    scanf("%d", &r);
    int r2 = r*r;
    printf("%f", pi*r2);
} 
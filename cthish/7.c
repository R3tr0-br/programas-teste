#include <stdio.h>
int main(void) {
    int  num = 0;
    printf("Digite o numero que você deseja saber se eh positivo, negativo ou zero: ");
    scanf("%d", &num);
    if (num > 0) {
       printf("O numero %d eh positivo!!!", num);  
    }
    
    else if (num < 0) {
    printf("O numero %d eh negativo!!!", num);
    }
    
    else{
    printf("Eh zero!!!", num);
    }
}
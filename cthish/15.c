#include <stdio.h>
#include <string.h>
int main(void) {

    char vetor1 [10];
    int i;
    int tamanho; 

    printf("Insira a palavra: ");
    scanf("%s", vetor1);

    tamanho = strlen(vetor1);

    printf("%d\n", tamanho);

    for (i = tamanho - 1; i >= 0; i--) {
        printf("\n%c", vetor1[i]);
    }

}
//2. Passagem por referência
//Implemente uma função chamada trocar que receba dois inteiros por referência (via
//ponteiro) e troque seus valores.
//No main, peça ao usuário para digitar dois números, chame a função e mostre os valores
//trocados.

#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int x, y;

    printf("Digite o primeiro numero: ");
    scanf("%d", &x);

    printf("Digite o segundo numero: ");
    scanf("%d", &y);
    
    trocar(&x, &y);

    printf("\nDepois da troca:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}

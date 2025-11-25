#include <stdio.h>
#include <stdlib.h>

struct Node {
    int valor;
    struct Node *prox;
};

int main() {
    struct Node *inicio = NULL;
    struct Node *atual = NULL;

    for (int i = 0; i < 5; i++) {
        struct Node *novo = (struct Node*) malloc(sizeof(struct Node));

        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &novo->valor);

        novo->prox = NULL;

        if (inicio == NULL) {
            inicio = novo;
        } else {
            atual->prox = novo;
        }

        atual = novo;
    }

    printf("\nValores na lista:\n");

    atual = inicio;
    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->prox;
    }

    printf("\n");

    return 0;
}

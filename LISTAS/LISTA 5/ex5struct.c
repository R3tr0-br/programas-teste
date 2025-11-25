#include <stdio.h>
#include <stdlib.h>

struct Node {
    int valor;
    struct Node *prox;
};

struct Node* removerInicio(struct Node* inicio) {

    if (inicio == NULL) {
        printf("Lista vazia! Nada para remover.\n");
        return NULL;
    }

    struct Node *remover = inicio;
    inicio = inicio->prox;

    free(remover);

    return inicio;
}

struct Node* inserirInicio(struct Node* inicio, int valor) {
    struct Node *novo = (struct Node*) malloc(sizeof(struct Node));

    novo->valor = valor;
    novo->prox = inicio;

    return novo;
}

void imprimirLista(struct Node* inicio) {
    struct Node *atual = inicio;

    printf("Lista: ");
    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->prox;
    }
    printf("\n");
}

int main() {
    struct Node *inicio = NULL;

    inicio = inserirInicio(inicio, 10);
    inicio = inserirInicio(inicio, 20);
    inicio = inserirInicio(inicio, 30);

    printf("Lista antes da remoção:\n");
    imprimirLista(inicio);

    inicio = removerInicio(inicio);

    printf("\nLista após remover o primeiro elemento:\n");
    imprimirLista(inicio);

    return 0;
}

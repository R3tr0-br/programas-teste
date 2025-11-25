#include <stdio.h>

int soma_num(int v[], int n) {
    int soma = 0;
    for (int i = 0; i < n; i++){
        soma += v[i];
    }
    return soma;
}
int main(void){

    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];
    printf("Digite %d numeros: \n", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &v[i]);

    }
    int resultados = soma_num(v, n);
    printf("Soma dos elementos = %d\n", resultados);

    return 0;
}
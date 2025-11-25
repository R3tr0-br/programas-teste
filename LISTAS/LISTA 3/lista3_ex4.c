//4. Ponteiros e strings
//Faça um programa que:
//● Leia uma string (até 50 caracteres)
//● Conte o número de vogais usando ponteiros para percorrer a string
//● Mostre o resultado

#include <stdio.h>

int main() {

    char texto[51];
    char *p;
    int vogais = 0;

    printf("Digite uma string: ");
    fgets(texto, 51, stdin);

    p = texto;

    while (*p != '\0') {

        char c = *p;

        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vogais++;
        }

        p++;
    }

    printf("\nQuantidade de vogais: %d\n", vogais);

    return 0;
}
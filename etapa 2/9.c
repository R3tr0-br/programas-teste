/*
verifique se um aluno foi reprovado:
média >=7.0 -> aprovado
média >= -> recuperação
senão -> reprovado
usando loop
*/
#include <stdio.h>
int main(void){
    int num;
    float notas = 0;
    float media;
    int contador = 1;

    
    while (num != 0){

        printf("Insira a nota da prova %d (Digite 0 para sair): ", contador);
        scanf("%d", &num);
        ++contador;
        notas += num;
    }

    contador -= 2;
    media = notas/contador;

    printf("A média foi %f \n", media);

    if (media >= 7) {

        printf("O aluno foi aprovado!\n\n");

    }
    else if (media >= 5 & media < 7){
        printf("O aluno esta de recuperacao!\n\n");

    }
    else{
        printf("O aluno esta reprovado\n\n");
    }
    
}
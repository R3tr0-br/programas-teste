// Conversor de celcius para farenraiti °F = (°C × 1,8) + 32. 
#include <stdio.h>
int main(void){
    float graus;
    char temperatura;
    float far = 5.0/9.0;
    float far2 = 9.0/5.0;
    float result;

    printf("Digite a temperatura: ");
    scanf("%f", &graus);
    
    printf("Deseja que a conversao seja feita para celsius ou farenaiti (c ou f): ");
    scanf(" %c", &temperatura);
    //while (getchar()!="\n")
    printf(" %c", temperatura);
    if (temperatura == 'c'){
        result = (graus - 32) * far;
        printf("Sao %f graus em celsius!", result);
    }
    else if(temperatura == 'f'){
        result = (graus * far2) + 32;
        printf("Sao %f graus em farenaiti", result);
    }

    else{
        printf("Nao foi possivel calcular!");
    }
    
}
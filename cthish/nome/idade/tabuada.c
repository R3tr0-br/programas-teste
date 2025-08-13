#include <stdio.h>
int main() {
    int x = 2;

    printf ("Tabuada do 2!\n");
    
    do{
        printf ("Tabuada: %d \n", x);
        x+=2;
        
    } 
    while (x <= 20);
    return 0;
}
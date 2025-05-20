#include <stdio.h>
#include <stdlib.h>

int main(){

    int fatorial, numero, i = 1 ;    

    printf("Me diga um numero irei fazer seu fatorial!\n");
    scanf("%i", &numero);

    while(i <= numero){

        fatorial *= i;
        i++;
    }
    
    printf("O valor do fatorial e %i", fatorial);

    return 0;

}
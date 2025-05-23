#include <stdio.h>
#include <stdlib.h>

int main(){

    int fatorial = 1, numero = 0, i = 1;    
    
    do{
        printf("Me diga um numero irei fazer seu fatorial!\n");
        scanf("%i", &numero);

        if(numero < 0){
            printf("Seu numero nao pode ser negativo!\n");
            return 0;
        }

        while(i <= numero){

            fatorial *= i;
            i++;
        }
        
        printf("O valor do fatorial e %i", fatorial);
        return 0;

    }while(numero >= 0);

    return 0;

}
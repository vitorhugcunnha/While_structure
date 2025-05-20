#include <stdio.h>
#include <stdlib.h>

int main(){

    float numeros, total = 0;

    do{
        printf("Valor dos numeros?\n");
        scanf("%f", &numeros);
        total += numeros;
    }while (numeros >= 0);

        total -= numeros;
        printf("Valor total e %f", total);
    

    return 0;

}
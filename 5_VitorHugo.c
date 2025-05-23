#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int divisor = 0;


    do{
        printf("Digite um numero: \n");
        scanf("%i", &divisor);

        if(divisor % 2 != 0){
            printf("E primo!\n");
            break;
        }else{
            printf("E par!\n");
        }
    }while(divisor % 2 == 0);

    return 0;
}
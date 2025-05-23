#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int numeroAleatorio, palpite;

    printf("Digite um numero de 1 a 100 que eu vou descobrir ele!!\n");
    scanf("%i", &palpite);
    printf("\n A partir daqui: \n");

    do{
        numeroAleatorio = rand() % 101;
        printf("%i \n", numeroAleatorio);


    }while(numeroAleatorio != palpite);
        


    return 0;
}
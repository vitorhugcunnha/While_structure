#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int numeroAleatorio = rand() % 101, palpite;

    do
    {
        printf("Vamos adivinhar o numero: \n");
        scanf("%i", &palpite);

        if(palpite == numeroAleatorio){
            printf("Parabens voce acertou o numero!\n");
        }else if(palpite < numeroAleatorio){
            printf("O numero aleatorio e maior do que isso!\n");
        }else{
           printf("O numero aleatorio e menor do que isso!\n");
        }

    } while (palpite < numeroAleatorio || palpite > numeroAleatorio);
    

    return 0;
}
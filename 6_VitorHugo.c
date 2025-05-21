#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    float n1, n2, resultado;

    do {
        printf("\n===== MENU DE OPCOES =====\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro e segundo numero: ");
            scanf("%f %f", &n1, &n2);
        }

        switch(opcao) {
            case 1:
                resultado = n1 + n2;
                printf("Resultado da soma e %f\n", resultado);
                break;
            case 2:
                resultado = n1 - n2;
                printf("Resultado da subtracao e %f\n", resultado);
                break;
            case 3:
                resultado = n1 * n2;
                printf("Resultado da multiplicacao e %f\n", resultado);
                break;
            case 4:
                if (n2 != 0) {
                    resultado = n1 / n2;
                    printf("Resultado da divisao e %f\n", resultado);
                } else {
                    printf("Erro na divisao por zero nao funciona!\n");
                }
                break;
            case 5:
                printf("Tchau tchau\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while(opcao != 5);

    return 0;
}
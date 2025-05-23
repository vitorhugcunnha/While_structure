#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1, n2;

    printf("Dois numeros!\n");
    scanf("%i %i", &n1, &n2);

    while(n1 != n2){
        if(n1 < n2){
            n1++;
            printf("%i| %i\n", n1, n2);
        }else{
            n2++;
            printf("%i | %i\n", n1, n2);
        }

    }
    
    return 0;

}
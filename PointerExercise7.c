#include <stdio.h>
#include <stdlib.h>

/*Receber um valor de array fornecido pelo usuario, dobrar o valor com realloc, solicitar o preenchimento e imprimir depois*/

int main(void){
    int *array = NULL;
    int arraySize = 0;

    printf("Digite o valor de array: ");
    scanf("%d", &arraySize);

    array = malloc(arraySize);


    return 0;
}
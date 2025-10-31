#include <stdio.h>
#include <stdlib.h>
/*Ponteiro dinamico*/
/*le 10 numeros em um array e calcula a media*/

int main(void){

    size_t holderInt = 0;
    int sum = 0;
    int media = 0;

    printf("Qual o tamanho do array?\n");
    scanf("%zu", &holderInt);
    
    int *sizeArray = malloc(holderInt * sizeof(int));

    if (sizeArray == NULL)
    {
        printf("Retorno NULL, não foi possivel a alocacao");
    }else if(holderInt == 0){
        printf("Valor do array invalido!");
        return 1;
    }

    
    size_t len = holderInt;

    printf("Preencha o array de tamanho %zu\n", holderInt);

    for (size_t i = 0; i < len; i++)
    {
        printf(">%zu.", i+1);
        scanf("%d", &sizeArray[i]);
        sum += sizeArray[i];
    }
    
    media = sum/holderInt;
    printf("A media e %d", media);
    

    free(sizeArray);
    return 0;
}

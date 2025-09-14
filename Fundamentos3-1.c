#include <stdio.h>
#include <stdlib.h>

int main(void){

    size_t rangeMatriz;
    int matriz[3][3], sum = 0;
    int lenL = sizeof(matriz) / sizeof(matriz[0]);
    int lenC = sizeof(matriz[0]) / sizeof(matriz[0][0]); 

    printf("Quantos numeros voce deseja acresentar na matrix?\n");
    scanf("%zu", &rangeMatriz);

    for (size_t i = 0; i < lenL; i++)
    {
        for (size_t j = 0; j < lenC; j++)
        {
            printf("Informe os numeros a serem preenchidos da matrix no espaco %d-%d\n",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
        
    }

    printf("Segue matriz:\n");
    for (size_t i = 0; i < lenL; i++)
    {
        for (size_t j = 0; j < lenC; j++)
        {
        printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    for (size_t i = 0; i < lenC; i++)
    {
        sum += matriz[i][i];
    }

    printf("A soma e : %d", sum);

    return 0;
}
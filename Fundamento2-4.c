/*Maior e menor número em um array*/
#include <stdio.h>

int main(void){
    int array[10], maior = 0, menor = 0;
    size_t Size = sizeof(array)/sizeof(int);

    printf("Digite os valores do array:\n");
    scanf("%d", &array[0]);

    maior = menor = array[0];

    for (size_t i = 1; i < Size; i++)
    {
        printf("Posicao %d\n", i+1);
        scanf("%d", &array[i]);

    if(array[i] > maior){
        maior = array[i];
    }else if(array[i] < menor){
        menor = array[i];
    }else{
        continue;
    }
 }
     
    printf("Menor valor do array: %d\nMaior valor do array: %d\n", maior, menor);

    return 0;
}
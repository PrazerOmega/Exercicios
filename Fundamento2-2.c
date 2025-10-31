/*Imprimir array e exibir soma total*/
#include <stdio.h>

int main(void){

    int array[10], total = 0;
    size_t Size = sizeof(array)/sizeof(int);

    printf("Informe os numeros do array\n");
    for (size_t i = 0; i < Size; i++)
    {
        printf("Posicao %d\n", i+1);
        scanf("%d", &array[i]);
        total += array[i];
    }
    
for (size_t i = 0; i < Size; i++)
{
    printf("%d ", array[i]);
}

printf("A soma total e: %d\n", total);



    return 0;
}
#include <stdio.h>

/*encontrar o maior valor de um array usando ponteiros*/

int main(void){

    int vetor[3] = {85, 20, 9};
    int *Pvetor = &vetor[0];
    int lenArray = sizeof(vetor) / sizeof(vetor[0]);
    int max = *Pvetor;

    for (size_t i = 0; i < lenArray ; i++)
    {
        if (*(Pvetor+i) > max)
        {
            max = *(Pvetor+i);
        }
        
    }
    
    printf("O maior valor e %d", max);

    return 0;
}
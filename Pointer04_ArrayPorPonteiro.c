#include <stdio.h>

/*Percorrer um array usando ponteiro e soma*/

int main(void){

    int vet[5] = {1,2,3,4,5};
    int *Pvet = &vet[0];
    int sum = 0;

    for (size_t i = 0; i < 5; i++)
    {
        printf("%d\n", *(Pvet+i));
        sum += *(Pvet+i);
    }

    printf("Soma: %d",sum);
    
return 0;

}
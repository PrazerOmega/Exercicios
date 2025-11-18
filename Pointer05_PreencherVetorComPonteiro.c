/*Criar um vetor de 5 slots que receba os valores, imprima-os e depois mostre a soma de todos os valores*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int *vet = malloc(5 * sizeof(int));
    int total = 0;

    if (vet == NULL)
    {
        perror("Erro ao alocar memoria!");
        return 1;
    }
    
    printf("Digite os numeros:\n");

    for (size_t i = 0; i < 5; i++)
    {
        if(scanf("%d", vet + i) != 1 || vet + i < 0){
            fprintf(stderr,"Valores invalidos!");
            return 1;
        }else{
         getchar();
         total += *(vet+i);
        }
    }

    for (size_t i = 0; i < 5; i++)
    {
        printf("%d: %d\n", i+1, *(vet+i));
    }
    
    printf("A soma e : %d", total);


    return 0;
}
/*Vetor de Strings Dinâmico com Troca*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100

void trocar(char **v, int i, int j);

int main(void){

    char **cVetor = NULL;
    int vetTam = 0;


    printf("Diga quantas palavras voce deseja escrever:\n");
    if(scanf("%d", &vetTam) != 1 || vetTam <= 0){
        fprintf(stderr,"Valores incorretos");
    }


    cVetor = malloc(vetTam * sizeof(char *));
    if(cVetor == NULL){
        perror("Erro ao alocar memoria!");
        return 1;
    }

    for (size_t i = 0; i < vetTam; i++)
    {
        cVetor[i] = malloc(TAM);
        if (cVetor[i] == NULL)
        {
            perror("Erro ao alocar memoria!");
            return 0;
        }
        
    }
    

    printf("Tamanho de vetores %d", size);

   // printf("Preencha o vetor com as palavras desejadas, até o maximo de 100 caracteres:\n");

   /* for(size_t i = 0; i < vetTam; i++){

        fgets(cVetor[i])

    }*/




    return 0;
}

void trocar(char **v, int i, int j);

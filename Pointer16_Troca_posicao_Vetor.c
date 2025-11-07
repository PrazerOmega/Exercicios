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
    

    printf("Preencha o vetor com as palavras desejadas, ate o maximo de 100 caracteres:\n\nPalavra 1:");
    fgets(cVetor[0], TAM, stdin);
    cVetor[0][strcspn(cVetor[0], "\n")] = '\0';

    for(size_t i = 1; i < vetTam; i++){

    printf("Palavra %zu: ", i+1);
     fgets(cVetor[i], TAM, stdin);
     cVetor[i][strcspn(cVetor[i], "\n")] = '\0';
    }

    trocar(cVetor,1,3);

for (size_t i = 0; i < vetTam; i++)
{
    printf("Palavra %zu: %s\n", i+1, cVetor[i]);
}


    return 0;
}

void trocar(char **v, int i, int j){
    char *temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

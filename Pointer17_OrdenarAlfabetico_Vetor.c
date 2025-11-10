/*Criar um vetor de X palavras(usuario decide), alocar strings em um vetor e ordenalas em ordem alfabetica*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define TAM 100

void alfabetico(char **vetor,  int qntWords);

int main(void){

    char **vetWord = NULL;
    int vetSize = 0;

    printf("Quantia de palavras a serem escritas:\n");
    scanf("%d", &vetSize);

    vetWord = malloc(vetSize * sizeof(char*));
    if(vetWord == NULL){
        perror("Erro ao alocar memoria!");
        return 1;
    }

    printf("Escreva as palavras:\n");

    for (size_t i = 0; i < vetSize; i++)
    {
        printf("Palavra %zu\n", i+1);
        fgets(vetWord[i], TAM, stdin);
        vetWord[i][strcspn(vetWord[i],"\n")] = '\0';
    }
    



    return 0;
}

    void alfabetico(char **vetor, int qntWords){

    char *order = malloc(qntWords * sizeof(char));
    if (order == NULL)
    {
        perror("Erro ao alocar memoria!");
        return 1;
    }
    
    for (size_t i = 0; i < qntWords; i++)
    {
       for (size_t j = 0; j < qntWords; j++)
       {
        int result = strcmp(*vetor[i], *vetor[j]);
       }
       
    }
    
    



    }
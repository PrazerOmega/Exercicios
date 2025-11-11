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
    getchar();

    vetWord = malloc(vetSize * sizeof(char*));
    if(vetWord == NULL){
        perror("Erro ao alocar memoria!");
        return 1;
    }

    printf("Escreva as palavras:\n");

    for (size_t i = 0; i < vetSize; i++)
    {
        vetWord[i] = malloc(TAM);
        printf("Palavra %zu\n", i+1);
        fgets(vetWord[i], TAM, stdin);
        vetWord[i][strcspn(vetWord[i],"\n")] = '\0';
    }

    alfabetico(vetWord,vetSize);

    for (size_t i = 0; i < vetSize; i++)
    {
        printf("Palavra %d: %s\n", i+1, vetWord[i]);
    }

    for (size_t i = 0; i < vetSize; i++)
    {
        free(vetWord[i]);
    }

    free(vetWord);
    

    return 0;
}

    void alfabetico(char **vetor, int vetSize){

        char *temp = NULL;
        int compare;

        for (size_t i = 0; i < vetSize - 1; i++)
        {
            for (size_t j = 0; j < vetSize; j++)
            {
                compare = strcmp(vetor[i],vetor[j]);

                if (compare < 0){
                    temp = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = temp;
                }else if(compare > 0){
                      temp = vetor[j];
                      vetor[j] = vetor[i];
                      vetor[i] = temp;
                }else{
                    continue;
                }
                
            }
            
        }

    }
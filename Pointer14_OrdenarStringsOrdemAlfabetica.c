/*Ordenar Duas Strings em Ordem Alfabética via Ponteiros*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 100

void swapString(char **str1, char **str2);

int main(void){

char *pWord = malloc(TAM);
char *sWord = malloc(TAM);

if(pWord == NULL || sWord == NULL){
    perror("Erro ao allocar memoria!");

    return 1;
}

printf("Digite a primeira palavra:\n");
fgets(pWord, TAM,stdin);
pWord[strcspn(pWord,"\n")] = '\0';

printf("Digite a segunda palavra:\n");
fgets(sWord, TAM, stdin);
sWord[strcspn(sWord,"\n")] = '\0';

size_t size1 = strlen(pWord);
size_t size2 = strlen(sWord);

swapString(&pWord, &sWord);

    free(pWord);
    free(sWord);

    return 0;
}


void swapString(char **str1, char **str2){

    int result = strcmp(*str1, *str2);
    
    if(result < 0){
    printf("Palavras na ordem alfabetica:\n%s\n%s",*str1,*str2);
    }else if(result > 0){
    printf("Palavras na ordem alfabetica:\n%s\n%s",*str2,*str1);
    }else{
        printf("As palavras sao iguais");
    }
    
}
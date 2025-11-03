/*Trocar duas strings via ponteiro*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100

void swapString(char **str1,char **str2);

int main(void){

char *fWord = malloc(TAM * sizeof(char));
char *sWord = malloc(TAM * sizeof(char));

if(fWord == NULL || sWord == NULL){
    perror("Erro ao alocar memoria!");
    return 1;
}

printf("Escreva a primeira palavra:\n");
fgets(fWord, TAM, stdin);
fWord[strcspn(fWord, "\n")] = '\0';

printf("Escreva a segunda palavra:\n");
fgets(sWord, TAM, stdin);
sWord[strcspn(sWord, "\n")] = '\0';

printf("Palavras:\n1-%s\n2-%s", *fWord, *sWord);
 swapString(*&fWord,*&sWord);
printf("Palavras:\n1-%s\n2-%s", *fWord, *sWord);



    return 0;
}

void swapString(char **str1, char **str2){

    int size = strlen(TAM);

    char temp = **str1;
    **str1 = **str2;
    **str2 = temp;
}
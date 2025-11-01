/*Converter strings para minúsculas e comparar*/
#include <stdio.h>
#include <string.h>
#define TAM 100

int main(void){

char fWord[TAM], sWord[TAM];
int result;

printf("Digite a primeira palavra\n");
fgets(fWord, TAM, stdin);
fWord[strcspn(fWord, "\n")] = '\0';

printf("Digite a segunda palavra\n");
fgets(sWord, TAM, stdin);
sWord[strcspn(sWord, "\n")] = '\0';

int fLen = strlen(fWord);
int sLen = strlen(sWord);

for (size_t i = 0; i < fLen; i++)
{
    if(fWord[i] >= 'A' && fWord[i] <= 'Z'){
        fWord[i] += 32;
    }
}

for (size_t i = 0; i < sLen; i++)
{
    if(sWord[i] >= 'A' && sWord[i] <= 'Z'){
        sWord[i] += 32;
    }
}


result = strcmp(fWord, sWord);

if(result == 0){
    printf("Palavras iguais");
}else{
    printf("As palavras sao diferentes");
}


    return 0;
}
/*Trocar strings entre indices de um array usando ponteiros*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100

void swapPointerVetor(char *str1, char *str2);

int main(void){

char word[2][TAM];

printf("Digite a primeira palavra\n");
fgets(word[0], TAM, stdin);
word[0][strcspn(word[0], "\n")] = '\0';

printf("Digite a segunda palavra\n");
fgets(word[1], TAM, stdin);
word[1][strcspn(word[1], "\n")] = '\0';

swapPointerVetor(word[0],word[1]);

printf("1 palavra: %s\n2 palavra: %s\n",word[0], word[1]);



    return 0;
}


void swapPointerVetor(char *str1, char *str2){
char temp[TAM];
strcpy(temp,str1);
strcpy(str1, str2);
strcpy(str2, temp); 
}
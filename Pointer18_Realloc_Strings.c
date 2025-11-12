/*Criar um programa que le caractere por caractere para aumentar dinamicamente o tamanho da String*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

 char *sentence = NULL;
 char c;
 size_t Tam = 0;


sentence = malloc(sizeof(char));

if (sentence == NULL)
{
    perror("Erro ao alocar memoria!");
    return  1;
}

Tam = 0;
printf("Digite os caracteres:\n");


while ((c = getchar()) != '\n' && c != EOF)
{
    sentence = realloc(sentence, Tam+2);
    sentence[Tam] = c;
    Tam++;
    sentence[Tam] = '\0';
}


printf("%s", sentence);

free(sentence);



    return 0;
}
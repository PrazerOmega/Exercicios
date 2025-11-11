/*Criar um programa que le caractere por caractere para aumentar dinamicamente o tamanho da String*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

 char *sentence = NULL;
 size_t Tam = 0;

sentence = malloc(sizeof(char));

if (sentence == NULL)
{
    perror("Erro ao alocar memoria!");
    return  1;
}

Tam = sizeof(char);

printf("Digite os caracteres:\n");

for(int i = 0; i != '\0'; i++){

    if (scanf("%c", sentence[i]) != '\n')
    {
        sentence = realloc(sentence, Tam+=sizeof(char));
    }
    

}





    return 0;
}
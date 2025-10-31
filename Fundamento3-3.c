/*Maior palavra entre 5*/
#include <stdio.h>
#include <string.h>
#define QNT 5
#define TAM 100

int main(void){

    char words[QNT][TAM];

    printf("Escreva as 5 palavras\n");

    for (size_t i = 0; i < QNT; i++)
    {
        fgets(words[i], TAM, stdin);
        
    }
    


    return 0;
}
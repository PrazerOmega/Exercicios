/*Maior palavra entre 5*/
#include <stdio.h>
#include <string.h>
#define QNT 5
#define TAM 100

int main(void){

    char words[QNT][TAM];
    char *lWord = "\0";

    printf("Escreva as 5 palavras\n");
    fgets(words[0], TAM, stdin);
    words[0][strcspn(words[0], "\n")] = "\0";
    lWord = words[0];

    for (int i = 1; i < QNT; i++)
    {
        fgets(words[i], TAM, stdin);
        words[i][strcspn(words[i],"\n")] = '\0';

        if(strlen(words[i]) > strlen(lWord)){
            lWord = words[i];
        }
    }
    
    printf("A maior palavra e %s", lWord);

    return 0;
}
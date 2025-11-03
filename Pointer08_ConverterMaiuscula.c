/*Converter string para maiúsculas com ponteiro*/
#include <stdio.h>
#include <string.h>
#define TAM 100

void uppercase(char *str);

int main(void){

char word[TAM];

printf("Digite a palavra\n");
fgets(word, TAM, stdin);
word[strcspn(word, "\n")] = '\0';
uppercase(word);

printf("%s", word);


    return 0;
}

void uppercase(char *str){
    

    for (char *i = str; *i != '\0'; i++)
    {
        if(*i >= 'a' && *i <= 'z'){
            *i -= 32; 
        }
    }

}
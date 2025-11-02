/*Converter string para maiúsculas com ponteiro*/
#include <stdio.h>
#include <string.h>
#define TAM 100

void uppercase(char *str);

int main(void){

char word[TAM];

printf("Digite a palavra");
fgets(word, TAM, stdin);
word[strcspn(word, "\n")] = '\0';
uppercase(word);

printf("%s", word);


    return 0;
}

void uppercase(char *str){
    int len = strlen(str);

    for (size_t i = 0; i < len; i++)
    {
        if(&str[i] > 'a' && &str[i] < 'z'){
            str[i] -= 32; 
        }
    }

}
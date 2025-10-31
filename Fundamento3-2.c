#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*Conta quantas vogais tem na frase*/

int main (void){

    char frase[200];
    int contador = 0;

    printf("Digite a palavra ou frase: \n");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';
    size_t len = strlen(frase);

    for (size_t i = 0; i < len; i++)
    {
        frase[i] = tolower((unsigned char)frase[i]);
    }

    for (size_t i = 0; i < len; i++)
    {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')
        {
            contador++;
        }
        
    }
    
    if(contador > 0)
    {
        printf("O numero de vogais na frase e de %d\n", contador);
    }else{
        printf("Nao tem vogais na frase ou palavra\n");
    }


    return 0;
}
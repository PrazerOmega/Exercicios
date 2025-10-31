#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

/*verificar se a palavra e um paldromo*/

int main(void){
 setlocale(LC_ALL,"Portuguese_Brazil.1252");

    char palavra[100];
    char Inverso[100];

    printf("Digite a palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0';
    size_t len = strlen(palavra);
    Inverso[len] = '\0';


    for (size_t i = 0; i < len; i++)
    {
        palavra[i] = tolower((unsigned char)palavra[i]);
    }
    

    for (size_t i = 0, j = len-1; i < len; i++)
    {
        Inverso[i] = palavra[j];
        j--;
    }
    
   /* for (size_t i = 0; i < len; i++)
    {
        printf("%c",palavra[i]);
    }

    for (size_t i = 0; i < len; i++)
    {
        printf("%c",Inverso[i]);
    }*/
    
   if(strcmp(palavra, Inverso) == 0){
    printf("A palavra %s é um palidromo", palavra);
   }else{
    printf("A palavra %s não é um palidromo", palavra);
   }
    
    return 0;
}
#include <stdio.h>
#include <string.h>
#define BUFFER 100

size_t my_strlen(const char *s);

int main(void){

    char palavra[BUFFER];

    printf("Digite a palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    my_strlen(palavra);
    printf("\n%d", strlen(palavra));


    return 0;
}

size_t my_strlen(const char *s){

    size_t cont = 0;
    
    for (size_t i = 0;  ; i++)
    {
        if (*(s+i) != '\0')
        {
            cont++;

        }else{
            break;
        }
        
    }

    //   printf("A palavra %s tem %d letras", s, cont);  

    return cont;
}
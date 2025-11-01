/*Implementação de strlen de maneira manual*/

#include <stdio.h>
#include <string.h>

#define BUFFER 100


size_t my_strlen(const char *s);

int main(void) {
    char palavra[BUFFER];

    printf("Digite a palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0'; // remove newline

    size_t tamanho = my_strlen(palavra);
    printf("Tamanho calculado manualmente: %zu\n", tamanho);

    
    printf("Tamanho com strlen(): %zu\n", strlen(palavra));

    return 0;
}

size_t my_strlen(const char *s) {
    size_t cont = 0;

    for (size_t i = 0; s[i] != '\0'; i++) {
        cont++;
    }

    return cont;
}

/*Ordenar array de structs dinamicamente por nome (usando ponteiros)*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100


typedef struct 
{
    char nome[TAM];
    int idade;
} Pessoa;


void orderAlfa(char *name1, char *name2, int qnt);

int main(void){

int qntPessoas = 0;

printf("Quantas pessoas deseja cadastrar?\n");
scanf("%d", &qntPessoas);
getchar();

Pessoa *user = malloc(qntPessoas * sizeof(Pessoa));

if(user == NULL){
    perror("Erro ao alocar memoria!");
    return 1;
}

for (size_t i = 0; i < qntPessoas; i++)
{
    printf("Escreva o nome da pessoa %zu\n",i+1);
    fgets((user+i)->nome,TAM,stdin);
    (user+i)->nome[strcspn((user+i)->nome, "\n")] = '\0';

    printf("Agora preencha a idade da pessoa:\n");
    if (scanf("%d", &(user+i)->idade) != 1 || (user+i)->idade <= 0)
    {
        fprintf(stderr,"Valor digitado invalido!");
        return 1;
    }
    getchar();
}



    for(int i = 0;i < qntPessoas; i++){
        printf("\n\nNome da pessoa %d: %s\n", i+1,(user+i)->nome);
        printf("Idade da pessoa: %d\n", (user+i)->idade);
    }

        printf("\n");
    return 0;
}


void orderAlfa(char *name1, char *name2, int qnt){

    for (size_t i = 0; i < qnt -1 ; i++)
    {
        for (size_t j = 0; j < qnt; j++)
        {
            if((strcmp))
        }
        
    }
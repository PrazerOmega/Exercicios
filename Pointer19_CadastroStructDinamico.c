/*Criar um programa que pergunte qunatas pessoas serão cadastradas, cadastrar nome(até 100 char) e idade
alocar em um vetor de structs dinamico e depois imprimir*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100


typedef struct
{
    char nome[TAM];
    int idade;

} Pessoa;



int main(void){

int qntCadastro = 0;
Pessoa *ptr = NULL;

printf("Quantas pessoas voce deseja cadastrar?");
scanf("%d", &qntCadastro);
getchar();

ptr = malloc(qntCadastro * sizeof(Pessoa));

if (ptr == NULL){
    perror("Erro ao alocar memoria");
    return 1;
}

    for(int i = 0;i < qntCadastro; i++){
        printf("Digite o nome %d\n", i+1);
        fgets((ptr+i)->nome, TAM, stdin);

        printf("Agora digite a idade da pessoa:\n");
        if(scanf("%d", &(ptr+i)->idade) != 1 || (ptr+i)->idade <=0){
            fprintf(stderr,"Valores incorretos");
            return 1;
        }
        getchar();
    }

for (size_t i = 0; i < qntCadastro; i++)
{
    printf("\nNome %d: %s", i+1, (ptr+i)->nome);
    printf("Idade: %d\n", (ptr+i)->idade);
}
 

    return 0;
}
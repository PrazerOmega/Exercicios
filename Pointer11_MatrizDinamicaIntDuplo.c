/*Criar um programa que peça ao usuario 2 valores sendo linhas e colunas*/
/*alocar dinamicamente uma matriz de linhaXcoluna de inteiros usando ponteiros de ponteiros*/
/*Pedir para o usuario preencher todos os elementos da matriz*/
/*imprimir a matriz em formato tabulado*/
/*Liberar a memoria*/

#include <stdio.h>
#include <stdlib.h>


int main(void){
    int **matriz = NULL;
    int x, y;

    printf("Digite o numero total de linhas: ");
    scanf("%d", &x);

    printf("Digite o numero total de colunas: ");
    scanf("%d", &y);

    matriz = malloc(x * sizeof(int*));
    if (matriz == NULL)
    {
        perror("Erro ao alocar memoria!");
        return 1;
    }
    
    for(size_t i = 0; i < x; i++){
    matriz[i] = malloc(y * sizeof(int*));
    if (matriz[i] == NULL)
    {
        perror("Erro ao alocar memoria");
    }
    
}

printf("Preencha os valores da matriz\n");

for (size_t i = 0; i < x; i++)
{
    for(size_t j = 0; j < y; j++){
        printf("Linha %d coluna %d\n", i+1, j+1);
        if(scanf("%d", &matriz[i][j]) != 1 || matriz[i][j] <= 0){
            fprintf(stderr,"Valores incorretos");
            return 1;
        }
    }
}

printf("Segue matriz:\n\n");
for (size_t i = 0; i < x; i++)
{
    for (size_t j = 0; j < y; j++)
    {
        printf("%d ", matriz[i][j]);
    }
    printf("\n");
}


for (size_t i = 0; i < x; i++)
{
    free(matriz[x]);
}

   free(matriz);


    return 0;
}
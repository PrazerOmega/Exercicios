#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void) {

int *array = NULL, *tempArray = NULL;
int aSize, newSize = 0;

printf("Digite o tamanho do array: ");
if(scanf("%d", &aSize) != 1 || aSize <= 0){
    fprintf(stderr, "entrada invalida!");
    return 1;
}

array = malloc(aSize * sizeof(int));
if(array ==  NULL){
    perror("Falha ao alocar memoria");
    return 1;
}

for (size_t i = 0; i < aSize; i++)
{
    printf("Preencha o valor da posicao %d\n", i+1);
    scanf("%d", &array[i]);
}

    for (size_t i = 0; i < aSize; i++)
    {
        printf("%d ", array[i]);
    }
    Sleep(1500);
    
    system("cls");
    printf("Dobrando o tamanho do array...");
    Sleep(1500);

    tempArray = realloc(array, aSize * 2 * sizeof(int));

    if (tempArray == NULL)
    {
        perror("Erro ao alocar memoria");
    }
    
    array = tempArray;
    newSize = aSize * 2;
    printf("Nova memoria alocada com sucesso!");
    Sleep(1800);
    system("cls");

printf("Preencha os novos espacos\n");

    for (size_t i = aSize; i < newSize; i++)
    {
        printf("Posicao %d: ", i);
        scanf("%d", &array[i]);
    }
    

    for (size_t i = 0; i < newSize; i++)
    {
        printf("%d ",array[i]);
    }
    
    free(array);

    return 0;
}
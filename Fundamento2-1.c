#include <stdio.h>

/*le 10 numeros em um array e calcula a media*/

int main(void){

    int array[10];
    size_t len = sizeof(array) / sizeof(array[0]);
    int sum = 0;

    for (size_t i = 0; i < len; i++)
    {
        printf("Digite o numero na posicao %d do array\n>.", i+1);
        scanf("%d",&array[i]);
        sum += array[i];
    }
    
    float media = (float)sum/len;

    printf("A media e %.2f", media);

    return 0;
}

#include <stdio.h>



int main(void){

    int array[10];
    size_t len = sizeof(array) / sizeof(array[0]);
    int sum = 0;

    while (1)
    {
        for (size_t i = 0; i < len; i++)
    {
        printf("Digite o valor que ira ficar na posicao %d do array:\n ", i+1);
        scanf("%d",&array[i]);
        sum += array[i];

        if (i == 9)
        {
        int media = sum/len;
        printf("A soma e %d, e a media e %d\n", sum, media);   
        }else{
            continue;
        }
        
    }
    break;
    }

    return 1;
}

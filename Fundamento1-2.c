#include <stdio.h>

int main(void){
    int num;

    printf("Digite o numero inteiro: ");
    scanf("%d", &num);

    if (num%2 != 0)
    {
        printf("O numero e impar!");
    }else{
        printf("O numero e par");
    }
    


    return 0;
}
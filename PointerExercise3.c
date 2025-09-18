#include <stdio.h>

/*Função de swap dois numeros*/

void swap(int *num1, int *num2);

int main(void){

    int x = 10, y = 15;
    int *a = &x, *b = &y;

    printf("A: %d\nB: %d\n\n", *a, *b);
    swap(&x, &y);
    printf("A: %d\nB: %d", *a, *b);

    return 0;
}

void swap(int *num1, int *num2){

    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
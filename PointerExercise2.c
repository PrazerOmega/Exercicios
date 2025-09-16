#include <stdio.h>

void dobrar(int *num);

int main(void){

    int x = 0;
    printf("Valor de X: ");
    scanf("%d", &x);

    printf("%d\n", x);
    dobrar(&x);
    printf("%d\n", x);



    return 0;
}

void dobrar (int *num){
    *num *= 2;
}
#include <stdio.h>

//imprimir valor de uma variavel e troca-la usando ponteiro

int main(void){
    int x = 42;
    int *Px = &x;

    printf("%d\n", x);
    printf("%p\n", &x);
    printf("%d\n", *Px);
    printf("%p\n", Px);

    *Px = 99;

    printf("%d\n", *Px);

    return 0;
}
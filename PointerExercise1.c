#include <stdio.h>

int main(void){
    int x = 42;
    int *Px = &x;

    printf("%d\n", x);
    printf("%p\n", &x);
    printf("%d\n", *Px);
    printf("%p\n", Px);

    *Px = 99;

    printf("%d\n", x);

    return 0;
}
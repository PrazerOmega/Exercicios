#include <stdio.h>


int factory(int num1);


int main(void){
    int num1;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("O valor de %d fatorado e %d", num1, factory(num1));
    


    return 0;
}

int factorial(int num1){

    int total = 1;

    if(num1 == 1 || num1 == 0){
        return 1;
    }

    for (int i = 1; i <= num1; i++){
        total *= i;

    }
 

    return total;


    }

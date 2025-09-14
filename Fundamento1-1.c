#include <stdio.h>

/*Le dois numeros e mostra soma,subtracao,multiplicacao e divisao*/

int main(void){

    int num1, num2;

    printf("Primeiro numero: ");
    scanf("%d", &num1);

    printf("Segundo numero: ");
    scanf("%d", &num2);

    printf("%d\n", num1 + num2);
    printf("%d\n", num1 - num2);
    printf("%d\n", num1 * num2);
    printf("%.2f\n", (float)num1 /num2);

    return 0;
}
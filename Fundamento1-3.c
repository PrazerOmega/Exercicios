#include <stdio.h>
/*calculadora padrao usando switch case*/
int main(void){
    int num1, num2, choice;

    printf("Digite o primeiro numero:\n ");
    scanf("%d", &num1);

    printf("Digite o segundo numero:\n ");
    scanf("%d", &num2);

    printf("Qual operacao matematica voce gostaria de fazer?\n1-Soma\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Total: %d\n", num1 + num2);
        break;
    case 2:
        printf("Total:%d\n", num1 - num2);
        break;
    case 3:
        printf("Total:%d\n", num1 * num2);
        break;
    case 4:
        if(num1 == 0 || num1 < num2){
            printf("Parametros invalidos!");
            break;
        }else{
        printf("Total:%.2f\n", (float)num1 / num2);
        break;
    }
    default:
    printf("Escolha incorreta, encerrando o programa...");
        break;
    }




    return 0;
}
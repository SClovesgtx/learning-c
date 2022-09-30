#include<stdio.h>

int main(){

    int num1, num2, choice;

    printf("Por favor, digite dois números inteiros: \n");
    scanf("%d%d", &num1, &num2);

    printf("Digite 1 para adição, 2 para multiplicação e 3 para divisão:\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Soma: %d", num1 + num2);
        break;
    
    case 2:
        printf("Multiplicação: %d", num1 * num2);
        break;

    case 3:
        printf("Divisão: %d", num1/num2);
        break;
    
    default:
        printf("Digite um número válido.");
        break;
    }
}



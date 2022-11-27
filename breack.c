#include<stdio.h>

int main(){
    int num;
    while (1)
    {
        printf("Digite um número inteiro: \n");
        scanf("%d", &num);
        if (num < 0)
        {
            break;
        }
        printf("O número digitado foi %d\n\n", num);
        
    }

    return 0;
    
}
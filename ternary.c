#include<stdio.h>

int main(){
    int n;
    printf("Digite um número inteiro:\n");
    scanf("%d", &n);
    n > 0 ? printf("O número é positivo.") : printf("O número é negativo.");
}
#include<stdio.h>

int sum(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}

int main(){
    int a, b, res;
    printf("Digite um inteiro: ");
    scanf("%d", &a);
    printf("Digite outro inteiro:  ");
    scanf("%d", &b);
    res = sum(a=a, b=b);
    printf("O resultado da soma é %d\n\n", res);
    return 0;
}
#include<stdio.h>

int factorial(int n){
    if (n <= 1){
        return 1;
    }
    return n * factorial(n=n-1);
}

int main(){
    int n, res;
    printf("Digite um número para obter seu fatorial: ");
    scanf("%d", &n);
    res = n * factorial(n=n); // ????
    printf("O fatorial de %d é %d.\n\n", n, res);
    return 0;
}
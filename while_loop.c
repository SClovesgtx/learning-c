#include<stdio.h>

int main() {
    int num, count=0;
    printf("Digite um número inteiro positivo: \n");
    scanf("%d", &num);

    while (num > 1) {
        num = num >> 1;
        count++;
    }
    printf("Levou %d interações.", count);
}
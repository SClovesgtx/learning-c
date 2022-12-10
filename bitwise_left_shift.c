#include<stdio.h>

int main(){
    int a = 14;
    // 14 = 01110
    // o left shift 1 irá adicionar 1 zero à direita
    // ou seja, irá empurrar 01110 para a esquerda.
    // Isso dará 011100 = 28.
    // que é igual 14 * 2 = 14 * (2^1).
    // Podemos generalizar que se aplicarmos
    // n left shit, então output = 14 * (2*n).
    printf("%d\n", a << 1); // 14 * (2^1) = 28
    printf("%d\n", a << 2); // 14 * (2^2) = 56
    printf("%d\n", a << 3); // 14 * (2^3) = 112
    return 0;
}
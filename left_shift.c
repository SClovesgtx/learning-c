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
    int output1 = a << 1; // 14 * (2^1) = 28
    int output2 = a << 2; // 14 * (2^2) = 56
    int output3 = a << 3; // 14 * (2^3) = 112
    printf("%d\n", output1);
    printf("%d\n", output2);
    printf("%d\n", output3);
    return 0;
}
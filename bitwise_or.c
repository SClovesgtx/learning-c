#include<stdio.h>

int main() {
    int a = 10, b = 12;
    int output = a | b;
    // aplique a tabela verdade na representação binária
    //          dec   binário
    // a =      10  = 1010
    // b =      12  = 1100
    // output = 14 =  1110

    printf("%d\n", output);

    return 0;
}

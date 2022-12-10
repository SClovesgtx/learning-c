#include<stdio.h>

int main() {
    int a = 5, b = 9;
    int output = a ^ b;
    // aplique a tabela verdade na representação binária
    //          dec   binário
    // a =      5  =  0101
    // b =      9  =  1001
    // output = 12  = 1100

    printf("%d\n", output);
    
    // propriedade interessante:
    // aplicar operação xor entre "output" e "b"
    // voltamos ao valor de "a"
    // aplique a tabela verdade XOR na representação binária
    //          dec   binário
    // b =      9  =  1001
    // output = 12  = 1100
    // a =      5  =  0101
    output = output ^ b;

    printf("%d\n", output);

    return 0;
}
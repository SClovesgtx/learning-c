#include<stdio.h>

int main() {
    int a = 5, b = 9;
    int output = a & b;
    // aplique a tabela verdade na representação binária
    //          dec   binário
    // a =      5  =  101
    // b =      9  = 1001
    // output = 1  = 0001

    printf("%d\n", output);

    return 0;
}

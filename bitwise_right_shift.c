#include<stdio.h>

int main(){
    int a = 128;
    printf("%d\n", a >> 1); // 128 / (2^1) = 64
    printf("%d\n", a >> 2); // 128 / (2^2) = 32
    printf("%d\n", a >> 3); // 128 / (2^3) = 16
    return 0;
}
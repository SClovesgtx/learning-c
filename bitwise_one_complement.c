#include<stdio.h>

int main(){
    // o bitwise "ones complement"
    // muda o bit 0 para 1 e o 1 para 0 
    int a = 4; // 4 = 00000100
    printf("%d\n", ~a); // ~4 = 11111011
}
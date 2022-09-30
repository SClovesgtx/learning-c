#include<stdio.h>

int main(){

    int n = 100; int f = 10;
    printf("100 - 10: %d\n", n - f);
    printf("100 + 10: %d\n", n + f);
    printf("100 / 10: %d\n", n / f);
    printf("100 %% 10: %d\n", n % f);
    printf("++100: %d\n", ++n);
    printf("--100: %d\n", --n);
    printf("100 ==  10: %d\n", n == f);
    printf("100 ==  100: %d\n", n == n);
    n > f ? printf("sim\n"):printf("não\n");
    return 0;
}
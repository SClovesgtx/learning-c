#include<stdio.h>

int main(){
    int i = 5;
    printf("Value of i: %d\n", i);
    i++;
    printf("Value of i: %d\n", i);
    i--;
    i--;
    printf("Value of i: %d\n", i);

    // post-increment
    int a = 10;
    int b = a++;
    printf("b = %d and a = %d\n", b, a);

    // pre-increment
    int a2 = 10;
    int b2 = ++a2;
    printf("b = %d and a = %d\n", b2, a2);

}
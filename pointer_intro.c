#include<stdio.h>

int main(){
    int a = 10;
    int *p = &a;

    printf("The value of 'a' is %d.\n", a);
    printf("The memory address of 'a' is %p.\n", &a);
    printf("The pointer 'p' is pointing to address %p.\n", p);
    printf("The value storage in address pointed for pointer 'p' is %d.\n", *p);
    printf("The address memory of 'p' is %p.\n", &p);

    return 0;
}
#include<stdio.h>

int main(){

    char msg[6] = "Hello";
    printf("%s\n", msg);

    msg[4] = '*';
    printf("%s\n", msg);

    msg[1] = '#';
    printf("%s\n", msg);

    return 0;

}
#include<stdio.h>

int main(){
    union value
    {
        int i;
        char c;
    };

    union value v;

    v.c = 10;
    v.c = 'a'; // in ASCII code is 97
    
    // 'i' is not 10 because a overlap his binary code.
    printf("i = %d, c = %c\n", v.i, v.c);

    return 0;
}
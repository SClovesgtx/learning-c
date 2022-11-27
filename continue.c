#include<stdio.h>

int main() {
    int i;
    for (i = 0; i < 6; i++)
    {
        if (i == 2 || i ==4){
            continue;
        }
        printf("%d\n", i);
    }
    
}
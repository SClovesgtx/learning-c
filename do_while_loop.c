#include<stdio.h>

int main() {
    int num;
    
    do {
        printf("Enter a integer number:\n");
        scanf("%d", &num);
        printf("The number is %d\n", num);
    } while (num != 100);

    return 0;
    
}
#include<stdio.h>

int main(){
    int numbers[5];
    printf("Enter five numbers:\n");
    for(int i=0; i<5; i++){
        scanf("%d\n", &numbers[i]);
    }
    printf("You have enter the following numbers:\n");
    for(int i=0; i<5; i++){
        printf("%d\n", numbers[i]);
    }
    return 0;
}
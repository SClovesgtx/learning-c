#include<stdio.h>

int main(){
    int a, b;
    printf("Enter two integers:\n");
    scanf("%d%d", &a, &b);
    if (a != b){
        printf("a/b = %d\n ", a/b);
    }
    else {
        printf("a == b \n");
    }
}
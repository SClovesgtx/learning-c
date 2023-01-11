#include<stdio.h>

int main(){
    int arr[3][3] = {
        {10, 54, 2}, 
        {89, 21, 81}, 
        {67, 32, 91}
    };
    int row;
    int col;
    printf("Choice a row by 1 to 3:\n");
    scanf("%d\n", &row);
    printf("Choice a column by 1 to 3:\n");
    scanf("%d\n", &col);
    printf("The number in row %d and column %d is %d.\n", row, col, arr[row-1][col-1]);
    return 0;
}
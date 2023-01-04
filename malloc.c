#include<stdlib.h>
#include<stdio.h>

int main(){
    int *ptr;
    // malloc == Memory Allocation
    ptr = malloc(5 * sizeof(int));

    if (ptr == NULL){
        printf("Memory required is not available in the heap.\n");
    }
    else {
        *(ptr + 0) = 10;
        *(ptr + 1) = 20;
        *(ptr + 2) = 30;
        *(ptr + 3) = 40;
        *(ptr + 4) = 50;
        printf("Memory required was allocated.\n");
    }

    return 0;
}

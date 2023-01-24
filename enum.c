#include<stdio.h>

int main(){
    enum {
        sunday=1, 
        monday, 
        tuesday, 
        wednesday=10, 
        thursday, 
        friday, 
        saturday
    };

    int arr[7] = {
        sunday, 
        monday, 
        tuesday, 
        wednesday, 
        thursday, 
        friday, 
        saturday
    };

    for(int i=0; i<7; i++){
        printf("%d\n", arr[i]);
    }
}
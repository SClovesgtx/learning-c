#include<stdio.h>

#define NAME "FORD"

typedef struct car
    {
        /* data */
        char name[5];
        float price;
    }car_obj;

int main(){
    car_obj car1 = {NAME, 50000};
    printf("Car name: %s\n", car1.name);
    printf("Car price: %f\n", car1.price);
}
#include<stdio.h>

int main(){

    // struture with padding
    struct car
    {
        /* data */
        char name[5];
        float price;
    };

    struct car car1 = {"ford", 50000};

    printf("Car name: %s\n", car1.name);
    printf("Car price: %f\n", car1.price);

    // struture with packing
    struct address
    {
        /* data */
        char street[50];
        int house_number;
        char zip_code[12];
    }__attribute__((packed));

    struct address user_address = {"Wall Street", 29, "80250-500"};

    printf("The user address is:\n");
    printf("Street: %s\n", user_address.street);
    printf("House number: %d\n", user_address.house_number);
    printf("Zip code: %s\n", user_address.zip_code);
    
    
}
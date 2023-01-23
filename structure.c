#include<stdio.h>

int main(){

    // struture with padding
    struct car
    {
        /* data */
        char name[5];
        float price;
    };

    // struture with packing
    struct address
    {
        /* data */
        char street[50];
        int house_number;
        char zip_code[12];
    }__attribute__((packed));

    // nested structures
    struct account
    {
        struct car user_car;
        struct address user_address;
    };
    
    struct car car1 = {"ford", 50000};

    struct address user_address = {"Wall Street", 29, "80250-500"};

    struct account c = {car1, user_address};

    printf("Car name: %s\n", c.user_car.name);
    printf("Car price: %f\n", c.user_car.price);

    printf("The user address is:\n");
    printf("Street: %s\n", c.user_address.street);
    printf("House number: %d\n", c.user_address.house_number);
    printf("Zip code: %s\n", c.user_address.zip_code);
    
    
}
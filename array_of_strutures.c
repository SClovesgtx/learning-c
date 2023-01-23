#include<stdio.h>

struct student
{
    char name[10];
    int age;
    int roll;
};


void print_students(struct student s[3]){
    for (int i=0; i<3; i++){
        printf("The student %s has %d years old and is in roll %d.\n", s[i].name, s[i].age, s[i].roll);
    }
}

int main(){
    struct student s[3] = {
        {"Cloves", 33, 10},
        {"Daniela", 21, 20},
        {"Alex", 30, 11},
    };

    print_students(s);

    return 0;
    
}

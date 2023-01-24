#include<stdio.h>

void implicit_datatype_conversion(){
    int i = 100;
    char c = 'A'; // ASCII code 97
    int res = i - c; // the int > char, so 'c' is converted to int 97
    printf("%d\n", res);
}

void explicit_datatype_conversion(){
    float f = 10/(float)3;
    printf("%f\n", f);
}

int main(){

    implicit_datatype_conversion();
    explicit_datatype_conversion();

    return 0;
}
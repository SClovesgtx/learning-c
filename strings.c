
#include<stdio.h>

int main(){
    // 4 ways to initialize a string

    // specifying the size
    // 'brazil' has 6 chars, but we need to define 7 
    // for the '\0' char at the end. We do not see it
    // but it is there indicating the end of the string.
    char country1[7] = "Brazil"; // string must use ""

    // or initialization without size
    char country2[] = "India";

    // char by char specifying the size
    char country3[8] = {'G', 'e', 'r', 'm', 'a', 'n', 'y', '\0'}; // char must use ''

    // char by char not specifying the size
    char country4[] = {'J', 'a', 'p', 'a', 'n', '\0'};

    printf("%s\n", country1);
    printf("%s\n", country2);
    printf("%s\n", country3);
    printf("%s\n", country4);

    return 0;
}
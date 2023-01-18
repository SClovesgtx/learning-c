#include<stdio.h>
#include<string.h>

int main(){

    char str[6] = "Hello";

    char copy[6];

    // will put 'str' content into 'copy'
    strcpy(copy, str); 

    printf("%s\n", copy);

    int str_size = strlen(str);

    printf("The word %s has %d characters.\n", str, str_size);

    char str2[6] = "World";

    strcat(str, str2);

    printf("%s\n", str);

    char *p;

    // will return the address of charcter at the str 
    p = strchr(str, 'o');

    printf("%c\n", *p);

    return 0;
}
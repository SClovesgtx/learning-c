#include<stdio.h>
#include<string.h>

int main(){

    char str[6] = "Hello";

    char copy[6];

    // COPY
    // will put 'str' content into 'copy'
    strcpy(copy, str); 

    printf("%s\n", copy);

    // SIZE
    int str_size = strlen(str);

    printf("The word %s has %d characters.\n", str, str_size);

    char str2[6] = "World";

    // CONCATENATE
    strcat(str, str2);

    printf("%s\n", str);

    char *p;

    // SEARCH CHARACTER
    // will return the address of character at the str 
    p = strchr(str, 'o');

    printf("%c\n", *p);

    // SEARCH SUBSTRING
    char *pos;
    pos = strstr(str, "World");

    printf("%s\n", pos);

    // COMPARAISON
    char str3[4] = "abc";
    char str4[4] = "abc";

    if(strcmp(str3, str4) == 0)
        printf("It's equal!\n");
    else
        printf("It's different!");

    return 0;
}
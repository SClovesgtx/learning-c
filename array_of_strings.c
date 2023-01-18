#include<stdio.h>

int main(){
    //  fist define the numbers of strings that the array will have, in our case 5.
    // after, define the max size of each string, in our case 100.
    char subject[5][100] = {"Math", "Philosophy", "Biology", "Portuguese", "English"};

    for (int i=0; i < 5; i++)
        printf("%s\n", subject[i]);

    return 0;
}
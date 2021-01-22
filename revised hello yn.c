#include <stdio.h>
#include <string.h>

int main(void){
    char name[40];
    printf("What's your name? ");
    fgets(name, 40, stdin);
    printf("Before: Hello %s!\n", name);

    //get index of the newline using strcspn from <string.h>
    int newlineIndex =  strcspn(name, "\n");
    //then using the found index, replace it with the null terminator
    name[newlineIndex] = '\0'; //or a zero number 0 
    printf("\nAfter getting rid of newline from fgets:\nHello %s!\n", name);

    return 0;
}
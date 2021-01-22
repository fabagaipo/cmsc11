#include <stdio.h>

int main(void){
    char name[40];
    printf("What's your name? ");
    fgets(name, 40, stdin);
    printf("Hello %s!\n", name);
    return 0;
}
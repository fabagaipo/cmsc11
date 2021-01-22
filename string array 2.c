#include <stdio.h>
#include <string.h>

int main(void){
    char name [40];
    printf("What's your name? ");
    scanf(" %39[^\n]s", name); //introduced space before %
    printf("Hello %s!\n", name);

    return 0;
}
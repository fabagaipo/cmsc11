#include <stdio.h>
#include <string.h>

int main(void){
    char name[40];//increased size from 6 to 40
    printf("What's your name? ");
    scanf("%39s", name); // introduced width of 39
    printf("Hello %s!\n", name);
    //Test Case1: aaaaaaaaaaaaaaaaaaaaaaaa
    //test case above could be any letter that is more than 20
    //Test Case for 2.3 : Bart Simpson
    return 0;
}
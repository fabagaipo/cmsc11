#include <stdio.h>
#include <string.h>

int main(void){
    char name[6];
    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello %s!\n", name);
    //Test Case: aaaaaaaaaaaaaaaaaaaaaaaa
    //test case above could be an letter that is more than 20
    return 0;
}
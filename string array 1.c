#include <stdio.h>
#include <string.h>

int main (void) {
    char name[40];
    printf("What's your name? ");
    scanf("%[^\n]s", name);
    printf("Hello %s!\n",name);

    return 0;
}
#include <stdio.h>

int main(void){
    char c, *cPtr;  /* declare a pointer to a character */
    int i, *intPtr; /* declare a pointer to an integer */
    c = 'A';
    i = 10;
    printf("Variable\tAddress\t\tContent\n");
    printf("%s\t\t%p\t%c\n", "c", &c, c);
    printf("%s\t\t%p\t%d\n", "i", &i, i);

    cPtr = &c;      /*assign pointer variable cPtr to the address of c, thus cPtr is now pointing to c*/
    intPtr = &i;
    printf("%s\t\t%p\t%p\t*cPtr=>%c\n", "cPtr", &cPtr, cPtr, cPtr, *cPtr);
    printf("%s\t\t%p\t%p\t*intPtr=>%d\n", "iPtr", &intPtr, intPtr, *intPtr);

    *cPtr = 'X';
    *intPtr = 100;
    //Updated Values
    printf("\n%s\t\t%p\t%c\n", "c", &c, c);
    printf("%s\t\t%p\t%d\n", "i", &i, i);
    printf("%s\t\t%p\t%p\t*cPtr=>%c\n", "cPtr", &cPtr, cPtr, *cPtr);
    printf("%s\t\t%p\t%p\t*intPtr=>%c\n", "iPtr", &intPtr, intPtr, *intPtr);
    return 0;
}
#include <stdio.h>

int main(void){
    char c[] = "hello";
    float f[] = {3.14, 2.71};
    double d[]= {3.14, 2.71, 2.61};

    printf("Size of the character array is: %d\n", sizeof(c)/sizeof(char));
    printf("Size of the float array is: %d\n", sizeof(f)/sizeof(float));
    printf("Size of the double array is: %d\n", sizeof(d)/sizeof(double));

    return 0;
    
}
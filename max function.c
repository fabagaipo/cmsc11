#include <stdio.h>
//function prototype @ line 3
int maximum(int, int, int);

int main(void){
    int num1, num2, num3;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    //num1, num2, num3 are arguments to the
    //maximum function call
    printf("Maximum is: %d\n", maximum(num1, num2, num3));
    return 0;
}

//Function maximum definition
//x, y and z are parameters
int maximum(int x, int y, int z){
    int max = x; //assume x is largest

    if(y > max){
        max = y;
    }
    if (z > max){
        max = z;
    }
    return max;
}
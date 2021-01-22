#include <stdio.h>
//prototype for function square @ line 3
int square(int);

int main(void){
    int a = 10;

    printf("%d squared: %d\n", a, square(a));
    return 0;
}

int square(int x){
    //calculate square then return result;
    return x * x;
}
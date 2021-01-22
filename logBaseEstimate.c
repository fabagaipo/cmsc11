#include <stdio.h>

int logBaseEstimate(int number, int base);

int main(void){
    int x, y;

    printf("Input: \nnumber = ");
    scanf(" %d", &x);
    printf("base = ");
    scanf(" %d", &y);
    printf("Output: %d", logBaseEstimate(x,y));

    return 0;
}

int logBaseEstimate(int number, int base){
    int estimate = 0;

    while(number > 0){
        if(number / base > 0){
            estimate++;
            number = number/base;
        }else{
            number = number/base;
        }

    }
    return estimate;
}
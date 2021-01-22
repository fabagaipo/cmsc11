#include <stdio.h>

int main(void){
    int x, y;

    printf("Input two integers: \n");
    scanf("%d %d", &x, &y);

    if (x<0 && y<0){
        printf("Quadrant III");
    }else if (x>0 && y<0){
        printf("Quadrant IV");
    }else if (x<0 && y>0){
        printf("Quadrant II");
    }else if (x>0 && y>0){
        printf("Quadrant I");
    }else if (x==0 && y==0){
        printf("Origin");
    }else{
        printf("Line");
    }
    return 0;
}
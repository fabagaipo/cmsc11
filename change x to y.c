#include <stdio.h>

int main(void){
    int x, y; 
    
    printf("\n[Input]\nEnter x and y: "); 
    scanf("%d %d", &x, &y); 

    printf("\n[Output]\nBefore: x = %d, y = %d", x, y);
  
    x = x * y; 
    y = x / y;  
    x = x / y;
  
    printf("\nAfter: x = %d, y = %d", x, y); 

    return 0;
}
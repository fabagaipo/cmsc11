#include <stdio.h>

int main(void) {
    int input[5];
    int i,j;
    int sum = 0; 
   

    printf("Enter an integer: \n");
    for(i=0; i<5; i++) 
    scanf("%d", &input[i]); 
    
        for(int i=0; i<5; i++) {
        sum +=input[i];
    }   

      printf("\nSum: %d", sum);
    printf("\nAverage: %0.2f", (float)sum / 5);

  return 0;   
}
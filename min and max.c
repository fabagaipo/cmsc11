#include <stdio.h>

int main(void) {
    int input[5];
    int i;
    int min = input[0];
    int max = input[0];

    printf("Enter an integer: \n");
    for(i=0; i<5; i++) 
    scanf("%d", &input[i]); 
        
    for(i=0; i<5; i++) {
            if (input[i]>max) {
                max = input[i];
            }if (input[i]<min) {
                min = input[i];
            }
        }

    printf("\nMin: %d", min);
    printf("\nMax: %d", max);

  return 0;   
}
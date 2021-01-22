#include <stdio.h>

int main(void) {
    int input[5], copy[5];
    int i,j;
    int sum; 

    printf("Enter an integer: \n");
    for(i=0; i<5; i++) {
    scanf("%d", &input[i]); 
    }
    for(i=0, j=4;i<5; i++, j--) {
        copy[j] = input[i];
    }
     printf("\nInput: ");
    for(int i=0; i<5; i++){ 
        printf("\n%d", input[i]);
    }
      printf("\nReverse: ");
    for(int i=0; i<5; i++){
        printf("\n %d", copy[i]);
    }
  return 0;   
}
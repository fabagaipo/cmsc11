#include <stdio.h>

int main(void) {
    int array[] = {1,3,9,4,5,5,1,9};
    
    int input;
    int i;
    int found=0;
    int counter = 0;

    printf("Enter an integer: ");
    scanf("%d", &input); 


    for(i=0; i<7; i++) {
        if(input == array[i]) {
            found=i;
        }else{
            counter++; 
        }
        if(i==6) {
        printf("Found in array[%d]", found); 
        }
        
    }
      if(found == 0) {
          printf("Not Found!");
      }
      return 0;
    
}
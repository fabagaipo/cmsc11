#include <stdio.h> 

int main(void) {
    int array[5];
    int input;
    int i; 
    int j;
    int k;
    int occurences=0;


    printf("Enter 5 positive integer values:\n");
    for(i=0;i<5; i++) {
        scanf("%d",&array[i]);
    }
    printf("\nThe unique elements found in the array are: ");
    for(i=0;i<5;i++) {
         occurences=0;

        for(j=0;j<i-1;j++) {

            if(array[i]==array[j]) {
             occurences++;
            }
        }
        for(k=i+1; k<5; k++) {
            if(array[i]==array[k]) {
                occurences++;
            }
        }
        if(occurences==0) {
            printf("%d ", array[i]);
        }
        if (occurences==4) {
        printf("none");
    }
    
    }
     return 0;
    
}  
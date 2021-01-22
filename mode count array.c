#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    srand(time(NULL));
    int i, j, numArray[10];
    int modeCount = 0;
    int modeNumber;
    int arr1[10];
    
    printf("Randomized_array: ");
    for (i = 0; i < 10; i++){
       arr1[i] = rand()%10;
        if(i != 9){
            printf("%d,", arr1[i]);
        }else{
            printf("%d", arr1[10]);
        }
    }for(i=0; i < 10; i++){
        arr1[i] = 0;
    }

    for(i=0; i < 10; i++){
        for (j = 0; j < 10; j++){
            if (numArray[i] == numArray[j])
                arr1[i]++;
        }
    }

    for (i=0; i < 10; i++){
        if (arr1[i] > modeCount){
            modeCount = arr1[i];
            modeNumber = numArray[i];
        }   
    }if (modeCount > 1){
        printf("\n[Output]Mode: %d",modeNumber);
    }else{
        printf("\n[Output]Mode: None");
    }

    return 0;

}
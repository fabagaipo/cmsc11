#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    srand(time(NULL)); 
    int arr1[5];
    int arr2[10] = {0,0,0,0,0,0,0,0,0,0};
    int i, j;

    printf("[Input] Random list:");
    for (i = 0; i < 5; i++){
       arr1[i] = rand()%10;
        if(i != 4){
            printf("%d,", arr1[i]);
        }else{
            printf("%d", arr1[5]);
        }
    }

    printf("\n\n[Output]\nnumber\tcount\n");
    for(i = 0; i < 10; i++){
       for(j = 0; j < 5; j++){
            if(arr1[j] == i){
                arr2[i] = arr2[i] + 1;
            }
        }
    }
    for(i = 0; i < 10; i++){
        printf("%d\t%d\n",i, arr2[i]);
    }   
    return 0;
}
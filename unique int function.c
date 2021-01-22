#include<stdio.h>
void unique(int a[]);

int main(void){
    int queue[5];
    printf("Input 5 integers: ");
    for(int i = 0; i<5; i++){
        scanf(" %d", &queue[i]);
    }
    unique(queue);
    return 0;
}

void unique(int a[]){
    int copy[5] = {0,0,0,0,0};
    int count = 0;
    for(int i =0; i<5; i++){
        for(int j=0; j<5; j++){
            if(j != i){
                if(a[i] == a[j]){
                    copy[i]=1;

                }else{
                    count++;
                }
            }
        }
    }
    if(count != 0){
        printf("\nUnique values: ");
        for(int i=0; i<5; i++){
            if(copy[i] == 0){
                printf("%d ", a[i]);
            }
        }
    }else{
        printf("\nNo unique values.");
    }

}

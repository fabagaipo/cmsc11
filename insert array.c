#include <stdio.h>
int main(void){
int arr[10]={1,2,3,4,5};
int num,index,tail;
int elements = sizeof(arr)/sizeof(int);
while(index!=-1||num!=-1){
        printf(" insert  ");
        scanf("%d",&num);
        printf(" @ index ");
        scanf("%d",&index);
         if(index==-1||num==-1){
                printf("invalid input");
                break;
         }
 //determines the number of elements
        int determiner=0;
        for(int i =0;i<elements;i++){
            if(arr[i]!=0){
                determiner++;
            }
        }
//end seeker
            for(int i =elements-1;i>0;i--){
                if(arr[i]==0){
                    tail=i;
                    break;
                }
            }
//insertion code
    for(int i=tail;i>=index;i--){
                arr[i]=arr[i-1];
            }
         arr[index]=num;
//endpoint
         int endp;
         for(int i = 0;i<elements;i++){
            if(arr[i]!=0){
                endp = i;
            }
         }
//for array printing
               for(int i = 0;i<=endp;i++){
                    printf("%d",arr[i]);
                    if(i==endp){
                        printf("");
                    } else {
                        printf(",");
                    }
                }
                printf("\n");
//for checking
        if(determiner>=elements-1){
                        printf("Array is full\n");
                        break;
                            }
                        }
return 0;
}

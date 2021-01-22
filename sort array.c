#include <stdio.h>

int main(void){
    int queue[7];
    int temp;

    printf("Enter the numbers to be sorted:\n");
    for(int counter1 = 0; counter1 < 7; counter1++){
        scanf("%d", &queue[counter1]);
        printf("\nOutput Array: ");

        for(int counter2 = 0; counter2 <= counter1; counter2++){
            if (counter1 == 0){
                break;
            }else{
                if (queue [counter1] < queue [counter2]){
                    temp = queue [counter1];
                    queue[counter1] = queue [counter2];
                    queue[counter2] = temp;
                }
            }
        }
        for (int counter2 = 0; counter2 <= counter1; counter2++){
            if(counter2 == counter1){
                printf("%d ", queue [counter2]);
            }else{
                printf("%d, ", queue[counter2]);
            }
        }
        printf("\n");

        if( counter1 == 6){
        }

    }
    return 0;
}
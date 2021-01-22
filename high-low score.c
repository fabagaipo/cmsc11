#include <stdio.h>

int main(void){
    int high,low;
    float score = 0.0;

    printf("Enter score:\n");
    scanf("%f", &score);
    high = score;
    low = score;
    while(score != -1){
        if(score >= high){
            high = score;
            printf("Enter score:\n");
            scanf("%f", &score);
        }else{
            low = score;
            printf("Enter score:\n");
            scanf("%f", &score);
        }
    }
    printf("Highest score: %d\n Lowest score: %d\n", high, low);
    return 0;
}

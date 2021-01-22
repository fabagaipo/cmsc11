#include <stdio.h>
int main(void){
    int array[6] = {-50,-10,10,55,6,999};
    int input, i;

    printf("Enter value for comparison: ");
    scanf("%d", &input);

    for(i=0; i < 6; i++){
        if(i < 5){
            if(input > array[i]){
                printf("Greater, ");
            }else if (input == array[i]){
                printf("Equal, ");
            }else{
                printf("Lesser, ");
            }
        }
        if(i == 5){
            if(input > array[i]){
                printf("Greater");
            }else if (input == array[i]){
                printf("Equal");
            }else{
                printf("Lesser");
            }
        }
    }
    return 0;
}

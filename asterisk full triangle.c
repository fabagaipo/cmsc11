#include <stdio.h>
int main(void){
    int row, i, j;

    printf("Enter height(n rows) of triangle.\n[Input]:\n");
    scanf("%d", &row);
    printf("\n\n[Output]:\n");
    while (row > 0){
        for(i = 1; i <= row; i++){
            for(j = i; j<row; j++){
                printf(" ");
            }
            for(j = 1; j<=(2*i-1); j++){
                printf("*");
            }
            printf("\n");
        }
    printf("\nEnter height(n rows) of triangle.\n[Input]:\n");
    scanf("%d", &row);
    printf("\n\n[Output]:\n");
    }
    return 0;
}


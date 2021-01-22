#include <stdio.h>

int main(void){
        int n;
        int count;
        int fact=1;

        printf("Enter positive integer:\n");
        scanf("%d", &n);

        printf("n: \t Factorial:\n");
        for(count = 1; count <= n; count++){
                fact *= count;
                printf("%d \t %d\n", count, fact);
        }
        return 0;
    }
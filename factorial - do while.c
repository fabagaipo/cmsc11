#include <stdio.h>

     int main(void){
        int n;
        int fact=1;
        int count=1;

        printf("Enter positive integer:\n");
        scanf("%d", &n);

        printf("n: \t Factorial:\n");
        do{
            fact *= count;
            printf("%d \t %d\n", count, fact);
            count++;
        }while (count <=n);

        return 0;
    }
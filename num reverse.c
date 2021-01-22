#include <stdio.h>

int main(void){
    int num;
    int reverse;
    int n;

    printf("Enter value:\n\t");
    scanf("%d", &num);
    printf("Reversed value:\n\t");
    while(num>0){
        reverse = num % 10;
        printf("%d",reverse);
        num /= 10 ;
    }
    return 0;
}

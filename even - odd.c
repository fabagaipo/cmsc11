#include <stdio.h>

int main(void){
    int n;

    printf("Input a positive number: ");
    scanf("%d", &n);

 
    if(n % 2 == 0){
        printf("%d = even", n);
    }else{
        printf("%d = odd", n);
    }
       
    return 0;
}

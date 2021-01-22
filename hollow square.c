#include <stdio.h>

int main(void){
    int i, j, n;

    printf("Enter size of hollow square: ");
    scanf("%d", &n);

    if (n>0){
        for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(i==1 || i==n || j==1 || j==n){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("Enter size of hollow square: ");
    scanf("%d", &n);
    }else{
        printf("Exit program...");
    }
    return 0;
}

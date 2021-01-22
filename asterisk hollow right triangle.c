 #include <stdio.h>

int main(void){
    int n;
    int counter1;
    int counter2;

    printf("Enter height(n) of hollow right triangle\n[Input]:\n");
    scanf("%d", &n);
    printf("\n\n[Output]:\n");
    while(n > 0){
        for(counter1 = 1; counter1 < n+1; counter1++){
            for(counter2 = 1; counter2 < counter1+1; counter2++){
              if(counter2 == 1 ||counter2 == counter1||counter1==n){
                    printf("*");
            } else{
                printf(" ");}
            }
            printf("\n");
        }
    printf("\nEnter height(n) of hollow right triangle\n[Input]:\n");
    scanf("%d", &n);
    printf("\n\n[Output]:\n");
    }
        return 0;
}



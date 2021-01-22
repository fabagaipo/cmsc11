#include <stdio.h>
#include <string.h>

int main(void){
    int input=1;

    while (input>0 && input<4) {
        printf("===============================\n");
        printf("Menu:\n\t1. Length\n\t2. Palindrome\n\t3. Count words\n===============================\n[INPUT] = ");
        scanf ("%d",&input);
        char string[100];
        int i, j;
        int pal=0, count=0, space=0;
        switch (input){

        case 1:
            printf("\nPlease enter a string:\n");
            printf(">>> ");
            scanf(" %99[^\n]s", string);
            count = strcspn(string, "\n");
            j = count;
            printf("\n[OUTPUT] = %d\n",j);
            break;

        case 2:
            printf("\nPlease enter a string:\n");
            printf(">>> ");
            scanf(" %99[^\n]s", string);
            count = strcspn(string, "\n");
            j = count-1;

            for(i=0; i<count; i++){
                if(string[i]==string[j]){
                    pal++;
                }
                j--;
            }
            if(pal==count){
                printf("\n[OUTPUT] = %s is a palindrome\n",string);
            }
            if(pal!=count){
                printf("\n[OUTPUT] = %s is not a palindrome\n",string);
            }
            break;

        case 3:
            printf("\nPlease enter a string:\n");
            printf(">>> ");
            scanf(" %99[^\n]s", string);
            count = strcspn(string, "\n");

            for(i=0;i<count;i++){
                if(string[i]==' '){
                    if(string[i+1]==' '){
                    } else {
                        space++;
                    }
                }
            }

            printf("\n[OUTPUT] = (%d) words\n", space+1);
            break;

        }
    }
    printf("\nTerminated.\n");
    return 0;
}

#include <stdio.h>

int main(void){ 
    int i, j, n;
    int x = 1; 
    
    printf("[Input]Enter height:    "); 
    scanf("%d", &n);
    printf("[Output]\n");
    
    while(n>0){
        for(i = 1; i<n*2; i++){ 
            for(j = 1; j <= x; j++){ 
                printf("#"); 
            } if(i < n) { 
                x++; 
            }else{ 
                x--; 
            }
                printf("\n");
        }
    printf("[Input]Enter height:    "); 
    scanf("%d", &n);
    printf("[Output]");
    }
    
    printf("End of program");

    return 0;

}


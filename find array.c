#include <stdio.h>

int main(void) {
  int n, Array[6] = {4,1,6,4,1,6} ;

  printf("Enter an integer: ");
  scanf("%d", &n);

    while (n!= -1) {

        if (n == Array[0]){
            printf("0");
        }
        if (n == Array[1]){
            printf("1");
        }
        if (n == Array[2]) {
            printf("2");
        }   
        if (n != Array[0] && n != Array[1] && n != Array[2]) {
            printf("Not Found");
        }
        printf("\n\nEnter an integer: ");
        scanf("%d", &n);
    }
    printf("\n\nExit program. . .");
  return 0;
}
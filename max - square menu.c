#include <stdio.h>
int maximum(int, int, int);
int square(int);

int main(void){
    int input;
    int num1, num2, num3;
    int a;

        printf("===============================\n");
        printf("Menu:\n\t1. Get Maximum\n\t2. Compute Square\n===============================\n[INPUT] = ");
        scanf ("%d",&input);

     while (input>0 && input<3) {   

        switch (input){

           case 1:
                printf("\n===============================\n");
                printf("Enter three integers: \n");
                scanf("%d %d %d", &num1, &num2, &num3);
                printf("Maximum is: %d\n", maximum(num1,num2,num3));
                printf("\n===============================\n");
            break;

            case 2:
                printf("\n===============================\n");
                printf("Enter an integer: ");
                scanf("%d", &a);
                printf("\n%d squared: %d\n", a, square(a));
                printf("\n===============================\n");
            break;

        printf("===============================\n");
        printf("Menu:\n\t1. Get Maximum\n\t2. Compute Square\n===============================\n[INPUT] = ");
        scanf ("%d",&input);
        }
    return 0;
    }
}
int square(int x) {
    return x * x;
}

int maximum (int x, int y, int z) {
    int max = x;

    if(y > max) {
        max = y;
    }
    if (z > max) {
        max = z;
    }
    return max;
}
 
  
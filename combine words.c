#include <stdio.h>

int main(void){
    char word1[10];
    char word2[10];
    char word3[20];
    int x = 0, y = 0;
    int i;

    printf("Input:\tword1: ");
    scanf("%s", &word1);
    printf("\tword2: ");
    scanf("%s", &word2);

    for(i =0; i < 20; i++){
        if(i % 2 == 0){
            word3[i] = word1[x];
            x++;
        }
        if(i % 2 != 0){
            word3[i] = word2[y];
            y++;
        }
    }

    printf("Output: ");
    printf("%s", word3);
    return 0;
}
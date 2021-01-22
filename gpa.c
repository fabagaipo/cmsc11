#include <stdio.h>

int main(void) {
  int score;
  printf("Enter score: ");
  scanf("%d",&score);

  if(score<0 || score>100){
    printf("Invalid score (must be between 0 to 100 only)");
  }else if(score<60){
    printf("5.0");
  }else if(score>=60 && score<64){
    printf("3.0");
  }else if(score>=64 && score<68){
    printf("2.75");
  }else if(score>=68 && score<72){
    printf("2.5");
  }else if(score>=72 && score<76){
    printf("2.25");
  }else if(score>=76 && score<81){
    printf("2.0");
  }else if(score>=81 && score<86){
    printf("1.75");
  }else if(score>=86 && score<91){
    printf("1.5");
  }else if(score>=91 && score<96){
    printf("1.25");
  }else{
  printf("1.0");
  }
}
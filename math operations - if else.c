#include <stdio.h>

int main(void) {
  float num1;
  float num2;
  char operator;

  printf("Enter 2 numbers and an operator: \n");
  scanf("%f %c %f", &num1, &operator, &num2);

  if(operator == '+'){
    printf("%f + %f = %.3f",num1, num2, num1 + num2);
  }else if(operator == '-'){
    printf("%f - %f = %.3f",num1, num2, num1 - num2);
  }else if(operator == '*'){
    printf("%f * %f = %.3f",num1, num2, num1 * num2);
  }else if (operator== '/'){
    if(num2 == 0){
      printf("Division by zero");
    }else{
      printf("%f / %f = %.3f",num1, num2, num1 / num2);
    }
  }else{
    printf("Invalid operator");
  }

  return 0;
}
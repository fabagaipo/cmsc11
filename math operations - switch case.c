#include <stdio.h>

int main(void) {
  float num1;
  float num2;
  char operator;

  printf("Enter 2 numbers and an operator: \n");
  scanf("%f %c %f", &num1, &operator, &num2);

switch(operator){
  case '+':
  printf("%f + %f = %.3f",num1, num2, num1 + num2);
  break;
  case '-':
  printf("%f - %f = %.3f",num1, num2, num1 - num2);
  break;
  case '*':
  printf("%f * %f = %.3f",num1, num2, num1 * num2);
  break;
  case '/':
   switch((int)num2){
    case 0:
    printf("Division by zero");
    break;
    default:
    printf("%f / %f = %.3f",num1, num2, num1 / num2);
  }
  break;
  default:
  printf("Invalid operator");
}
  return 0;
}
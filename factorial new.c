#include <stdio.h>
 
int main(void){
  int c, n, fact = 1;
 
  printf("[Input] Enter number: ");
  scanf("%d", &n);
 
  for (c = 1; c <= n; c++)
    fact = fact * c;
 
  printf("[Output] %d", fact);
 
  return 0;
}
#include <stdio.h>

int main() {
  int a, b, result;
  printf("Enter first number: \n");
  scanf("%d", &a);
  printf("Enter second number: \n");
  scanf("%d", &b);
  result = (a > b) ? (a + b) : (a - b);
  printf("The result = %d \n", result);
  return 0;
}
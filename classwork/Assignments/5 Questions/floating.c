#include <stdio.h>

int main() {
  float x, y;
  printf("Enter any 2 floating point numbers : \n");
  scanf("%f %f", &x, &y);
  printf("The sum of %f and %f = %f \n", x, y, x + y);
  printf("The difference of %f and %f = %f \n", x, y, x - y);
  printf("The product of %f and %f = %f \n", x, y, x * y);
  printf("The division of %f & %f = %f \n", x, y, x / y);
  return 0;
  }
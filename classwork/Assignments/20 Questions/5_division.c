#include <stdio.h>

int main() {
  int quotient, rem, divisor, dividend;
  printf("Enter the dividend: \n");
  scanf("%d", &dividend);

  printf("Enter the divisor: \n");
  scanf("%d", &divisor);
  quotient = dividend / divisor;
  rem = dividend % divisor;
  printf("The quotient: %d \n", quotient);
  printf("The remainder: %d \n", rem);

  return 0;
}
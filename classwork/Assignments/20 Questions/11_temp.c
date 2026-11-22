#include <stdio.h>

int main() {
  float C, F;
  printf("Enter the temperature in Centigrade: \n");
  scanf("%f", &C);
  F = (9.0 / 5.0) * C + 32;
  printf("The temperature in Fahrenheit = %.2f \n", F);
  return 0;
}
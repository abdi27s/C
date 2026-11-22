#include <stdio.h>

int main() {
  float days, months, years;
  printf("Enter the Days :\n");
  scanf("%f", &days);
  months = (days / 365) *12;
  years = days / 365;
  printf("Year = %.2f \n", years);
  printf("Months = %.2f \n", months);
  printf("Days = %.2f \n", days);
  return 0;
}
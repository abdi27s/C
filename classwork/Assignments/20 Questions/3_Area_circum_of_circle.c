#include <stdio.h>

int main() {
  float pi = 3.14, radius, area, circum;
  printf("Enter the radius of the circle: \n");
  scanf("%f", &radius);
  area = pi * radius * radius;
  circum = 2 * pi * radius;
  printf("The area of the circle with radius %.2f = %.2f \n", radius, area);
  printf("The circumference of the circle with radius %.2f = %.2f \n", radius, circum);
  return 0;
}
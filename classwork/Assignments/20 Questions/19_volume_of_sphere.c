#include <stdio.h>

int main() {
  float pi = 3.14, radius, volume;
  printf("Enter the radius of the sphere:\n");
  scanf("%f", &radius);
  volume = (4.0 / 3.0) * pi * radius * radius * radius;
  printf("The volume of sphere = %.2f \n", volume);
  return 0;
}
#include <math.h>
#include <stdio.h>
int main() {
  float a, b, c, s, area;
  printf("Enter the 3 sides of the triangle: \n");
  scanf("%f %f %f", &a, &b, &c);
  s = (a + b + c) / 2;
  area = sqrt(s * (s - a) * (s - b) * (s - c));
  printf("The area of the triangle = %.2f \n", area);
  return 0;
}
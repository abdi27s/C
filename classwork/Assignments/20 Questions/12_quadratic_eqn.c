#include <math.h>
#include <stdio.h>

int main() {
  double a, b, c, root1, root2, d;
  printf("Enter 3 coefficients (non zero): \n");
  scanf("%lf %lf %lf", &a, &b, &c);
  d = b * b - 4 * a * c;
  if (d > 0) {
    root1 = (-b + sqrt(d)) / 2 * a;
    root2 = (-b - sqrt(d)) / 2 * a;
    printf("The roots are %lf and %lf \n", root1, root2);
  } else {
    printf("No real roots.\n");
  }
  return 0;
}
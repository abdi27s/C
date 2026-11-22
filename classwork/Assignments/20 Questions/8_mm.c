#include <stdio.h>

int main() {
  float mm, cm, m, km;
  printf("Enter the length in mm : \n");
  scanf("%f", &mm);
  cm = mm / 10;
  m = cm / 100;
  km = m / 1000;
  printf("%.2f mm = %.2f mm \n", mm, mm);
  printf("%.2f mm = %.2f cm \n", mm, cm);
  printf("%.2f mm = %.2f m \n", mm, m);
  printf("%.2f mm = %.2f km \n", mm, km);

  return 0;
}
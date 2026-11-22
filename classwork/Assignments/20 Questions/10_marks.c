#include <stdio.h>

int main() {
  float m1, m2, m3, m4, m5, agg, per;
  printf("Enter the marks obtained in 5 subject: \n");
  scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
  agg = m1 + m2 + m3 + m4 + m5;
  per = (agg / 500) * 100;
  printf("The aggregate marks = %.2f \n", agg);
  printf("The percentage obtained = %.2f \n", per);
  return 0;
}
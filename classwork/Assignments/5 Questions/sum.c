#include <stdio.h>
int main() {
  int x, y, sum;
  printf("Enter any 2 numbers: \n");
  scanf("%d %d", &x, &y);
  sum = x + y;
  printf("The sum of %d and %d = %d \n", x, y, sum);
  return 0;
}
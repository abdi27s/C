#include <stdio.h>

int main() {
  int x, y, temp;
  printf("Enter first number (x): \n");
  scanf("%d", &x);
  printf("Enter second number (y): \n");
  scanf("%d", &y);

  temp = x;
  x = y;
  y = temp;

  printf("After swapping: x=%d, y=%d \n", x, y);
  return 0;
}
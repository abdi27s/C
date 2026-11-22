#include <stdio.h>

int main() {
  int x, rem;
  printf("Enter a number : \n");
  scanf("%d", &x);
  rem = x % 5;
  printf("The remainder after dividing by 5 = %d \n",rem);
  return 0;
  }
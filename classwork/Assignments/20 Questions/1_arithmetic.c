#include <stdio.h>

int main() {
  int a, b;
  printf("Enter first integer (a):");
  scanf("%d", &a);
  printf("Enter second integer (b):");
  scanf("%d", &b);
  printf("The sum (a+b)= %d \n",a+b);
  printf("The difference (a-b) = %d \n",a-b);
  printf("The product (a*b) = %d \n",a*b);
  printf("The division (a/b) = %d \n", a / b);
  return 0;
}
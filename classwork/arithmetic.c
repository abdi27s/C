#include <stdio.h>

int main() {
  float a, b;
  char name[10];
  printf("Enter your name :");
  scanf(" %s",name);
  printf("Enter first float number :");
  scanf("%f", &a);
  printf("Enter second float number :");
  scanf("%f", &b);
  printf("Hello, %s",name);
  printf("The sum (a+b)= %.2f \n",a+b);
  printf("The difference (a-b) = %.2f \n",a-b);
  printf("The product (a*b) = %.2f \n",a*b);
  printf("The division (a/b) = %.2f \n",a/b);
}
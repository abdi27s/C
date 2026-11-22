#include <stdio.h>

int main() {
  int x;
  printf("Enter a decimal number: \n");
  scanf("%d", &x);

  printf("Octal %o \n", x);
  printf("Hexadecimal %x \n", x);
  return 0;
}
#include <stdio.h>

int main() {
  int num, rem, sum = 0;
  printf("Enter a 5 digit number: \n");
  scanf("%d", &num);

  while (num != 0) {
    rem = num % 10;
    sum += rem;
    num /= 10;
  }
  printf("The sum = %d \n", sum);
  return 0;
}
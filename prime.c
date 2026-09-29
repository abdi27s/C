#include <stdbool.h>
#include <stdio.h>

int main() {
  int n;
  bool is_prime = true;
  printf("Prime Checker\n");
  printf("Enter a number:");
  scanf("%d", &n);
  if (n <= 1) {
    is_prime = false;
  } else {
    for (int i = 2; i * i <= n; i++) {
      if (n % i == 0) {
        is_prime = false;
        break;
      }
    }
  }
  if (is_prime) {
    printf("%d is a Prime Number\n", n);
  } else {
    printf("%d is not a prime Number\n", n);
  }
  return 0;
}
#include <stdio.h>

int main() {
  int x,res=0,rem;
  printf("Enter a 3 digit number: \n");
  scanf("%d", &x);

  while (x != 0) {
    rem = x % 10;
    res = rem + res * 10;
    x/=10;
  }
  printf("The reversed number is %d \n",res);
  return 0;
}
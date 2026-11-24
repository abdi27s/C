#include <stdio.h>

int main() {
  int age;

  printf("Enter your age: ");
  scanf("%d", &age);
  if (age <= 3)
    printf("Toddler \n");
  else if (age > 3 && age < 8)
    printf("Kid \n");
  else if (age >= 8 && age < 13)
    printf("Middle-School \n");
  else if (age >= 13 && age < 19)
    printf("Teenager \n");
  else
    printf("Adult \n");
  return 0;
}
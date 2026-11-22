#include <stdio.h>

int main() {
  float sec, hour, minute;
  printf("Enter the seconds :\n");
  scanf("%f", &sec);
  minute = sec / 60.0;
  hour = minute / 60.0;
  printf("Hour = %.2f \n",hour);
  printf("Minute = %.2f \n",minute);
  printf("Second = %.2f \n",sec);
  
  return 0;
  }
#include <stdio.h>

int main() {
    int l, b, area, perimeter;
    printf("Enter the length of the rectangle:\n");
    scanf("%d", &l);
    printf("Enter the breadth of the rectangle:\n");
    scanf("%d", &b);
    area = l * b;
    perimeter = 2 * (l + b);
    printf("The area of rectangle : %d \n", area);
    printf("The perimeter of rectangle : %d \n", perimeter);
    return 0;
}
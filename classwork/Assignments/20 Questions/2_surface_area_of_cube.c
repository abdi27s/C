#include <stdio.h>

int main() {
    float edge,area;
    printf("Enter the edge length of cube:\n");
    scanf("%f", &edge);
    area = 6 * edge * edge;
    printf("The surface area of cube with edge %.2f=%.2f \n", edge, area);
    return 0;
    }
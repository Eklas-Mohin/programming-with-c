#include <stdio.h>

int main() {
    float radius, area, pi = 3.14159;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    area =  pi * radius * radius;
    printf("Area of the circle: %f\n", area);

    return 0;
}

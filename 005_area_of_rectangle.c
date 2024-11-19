#include <stdio.h>

int main() {
    float length, breadth, area;

    printf("Enter length: ");
    scanf("%f", &length);
    printf("Enter breadth: ");
    scanf("%f", &breadth);

    area = length * breadth;
    printf("Area of the Rectangle is %f unit\n", area);

    return 0;
}

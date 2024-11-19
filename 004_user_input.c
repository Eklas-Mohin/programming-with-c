#include <stdio.h>

int main() {
    int age;
    char grade;
    float height;

    // User input for an integer
    printf("Enter your age: ");
    scanf("%d", &age); // %d is used for integers, &age is the address of variable

    // User input for a single character
    printf("Enter your grade: ");
    scanf("%c", &grade); // %c is used for single character

    // User input for a floating-point number
    printf("Enter your height in meters: ");
    scanf("%f", &height); // &height is the address of variable

    return 0;
}

// scanf() is a function used to take input

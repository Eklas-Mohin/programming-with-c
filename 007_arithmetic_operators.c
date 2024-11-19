#include <stdio.h>

int main() {
    int a = 20;
    int b = 10;

    // Arithmetic operations
    int addition = a + b;
    int subtraction = a - b;
    int multiplication = a * b;
    int division = a / b;
    int remainder = a % b;

    // Display results
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n\n", b);

    printf("Addition (a + b): %d\n", addition);
    printf("Subtraction (a - b): %d\n", subtraction);
    printf("Multiplication (a * b): %d\n", multiplication);
    printf("Division (a / b): %d\n", division);
    printf("Remainder (a %% b): %d\n", remainder);  // Use %% to print %

    return 0;
}

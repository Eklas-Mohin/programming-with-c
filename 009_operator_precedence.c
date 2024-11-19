#include <stdio.h>

int main() {
    int num1 = 3, num2 = 6, num3 = 9;
    printf("num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);

    // Demonstrate arithmetic operations with precedence
    printf("num1 * num2 / num3 = %d\n", num1 * num2 / num3); // (num1 * num2) / num3
    printf("num1 / num2 * num3 = %d\n", num1 / num2 * num3); // (num1 / num2) * num3

    int result = (3 * num2 / 2) * num3 + (7 * num1);
    printf("3 * num2 / 2 * num3 + 7 * num1 = %d\n", result); // Should be 102

    // Adding parentheses to clarify the order of operations
    result = (3 * num2) / (2 * num3) + (7 * num1);
    printf("(3 * num2) / (2 * num3) + (7 * num1) = %d\n", result);

    return 0;
}

 /* 
        result = 3 * 6 / 2 * 9 + 7 * 3
        result = 18 / 2 * 9 + 7 * 3
        result = 9 * 9 + 7 * 3
        result = 81 + 21
        result = 102
*/   

/*
        Priority           Operators
         
        1st                 * / %

        2nd                 + -

        3rd                  =

        Operator Associativity

        x * y / z -->  (x * y) / z

        x / y * z -->  (x / y) * z

        *, /, % follows left to right associativity
*/

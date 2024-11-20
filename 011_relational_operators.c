/*
    Relational Operators in C
    >   Greater than
    <   Less than
    >=  Greater than or equal to
    <=  Less than or equal to
    ==  Equal to
    !=  Not equal to
    Note: Any non-zero value is true
*/

#include <stdio.h>

int main() {
    int test_variable = 102;
    printf("test_variable = %d\n", test_variable);

    // Returns 1 if true 0 otherwise
    int x = test_variable > 100; // x = 1
    printf("test_variable > 100 : %d\n", x);
    x = test_variable < 100; // x = 0
    printf("test_variable < 100 : %d\n", x);
    x = test_variable == 100; // x = 0
    printf("test_variable == 100 : %d\n", x);
    x = test_variable == 102; // x = 1
    printf("test_variable == 102 : %d\n", x);

    x = test_variable >= 100; // x = 1
    printf("test_variable >= 100 : %d\n", x);
    x = test_variable <= 100; // x = 0
    printf("test_variable <= 100 : %d\n", x);
    x = test_variable != 100; // x = 1
    printf("test_variable != 100 : %d\n", x);
    x = test_variable >= 102; // x = 1
    printf("test_variable >= 102 : %d\n", x);

    return 0;
}

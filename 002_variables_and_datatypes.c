#include <stdio.h>

int main() {
    int a; // Variable Declaration
    a = 6; // Variable Initializtion
    printf("value stored in a is %d\n", a);

    char c = 'm'; // Dealaration & Initialization
    printf("c = %c\n", c);

    float f = 73.372112f;
    printf("f = %f\n", f); // 73.372108

    float d = 73.372112; 
    printf("d = %lf\n", d); // 73.372108

    // Size of C variables depends on machine's Architecture
    printf("Size of char: %zu bytes\n", sizeof(char)); // 1 bytes
    printf("Size of short: %zu bytes\n", sizeof(short)); // 2 bytes
    printf("Size of int: %zu bytes\n", sizeof(int)); // 4 bytes
    printf("Size of long: %zu bytes\n", sizeof(long)); // 8 bytes
    printf("Size of long long: %zu bytes\n", sizeof(long long)); // 8 bytes
    printf("Size of float: %zu bytes\n", sizeof(float)); // 4 bytes
    printf("Size of double: %zu bytes\n", sizeof(double)); // 8 bytes
    printf("Size of long double: %zu bytes\n", sizeof(long double)); // 16 bytes
    printf("Size of void pointer: %zu bytes\n", sizeof(void*)); // 8 bytes

    return 0;
}

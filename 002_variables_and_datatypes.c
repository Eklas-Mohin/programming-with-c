#include <stdio.h>

int main() {
    // Integer type demonstration
    int a;         // Variable Declaration
    a = 6;         // Variable Initialization
    printf("value stored in a is %d\n", a); // Prints the value of a

    // Character type demonstration
    char c = 'm';  // Declaration & Initialization
    printf("c = %c\n", c);

    // Floating-point type demonstration
    float f = 73.372112f;
    printf("f = %f\n", f); // Prints the value of f (may have slight precision differences)

    // Double precision floating-point demonstration
    double d = 73.372112;
    printf("d = %lf\n", d);

    // Size of C variables depends on machine's architecture
    printf("Size of char: %zu bytes\n", sizeof(char));             // Usually 1 byte
    printf("Size of short: %zu bytes\n", sizeof(short));           // Usually 2 bytes
    printf("Size of int: %zu bytes\n", sizeof(int));               // Usually 4 bytes
    printf("Size of long: %zu bytes\n", sizeof(long));             // Usually 8 bytes on 64-bit systems
    printf("Size of long long: %zu bytes\n", sizeof(long long));   // Usually 8 bytes
    printf("Size of float: %zu bytes\n", sizeof(float));           // Usually 4 bytes
    printf("Size of double: %zu bytes\n", sizeof(double));         // Usually 8 bytes
    printf("Size of long double: %zu bytes\n", sizeof(long double)); // Usually 16 bytes
    printf("Size of void pointer: %zu bytes\n", sizeof(void*));    // Usually 8 bytes on 64-bit systems

    return 0;
}

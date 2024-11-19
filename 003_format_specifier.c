#include <stdio.h>

int main() {
    // Integer types
    int a = 42;
    unsigned int b = 100;
    long c = 1234567890;
    short d = 10;
    
    // Floating-point types
    float e = 3.14159;
    double f = 2.718281828459;
    
    // Character type
    char g = 'A';
    
    // String type
    char str[] = "Hello, World!";
    
    // Format specifiers demonstration
    printf("Integer (%%d): %d\n", a);               // %d for integer
    printf("Unsigned Integer (%%u): %u\n", b);      // %u for unsigned integer
    printf("Long Integer (%%ld): %ld\n", c);        // %ld for long integer
    printf("Short Integer (%%hd): %hd\n", d);       // %hd for short integer

    printf("Float (%%f): %f\n", e);                 // %f for float
    printf("Double (%%lf): %lf\n", f);              // %lf for double
    printf("Exponential (%%e): %e\n", f);           // %e for exponential notation

    printf("Character (%%c): %c\n", g);             // %c for single character
    printf("String (%%s): %s\n", str);              // %s for string

    // Demonstrating hexadecimal and octal numbers
    printf("Hexadecimal (%%x): %x\n", a);           // %x for hexadecimal
    printf("Hexadecimal (%%X): %X\n", a);           // %X for uppercase hexadecimal
    printf("Octal (%%o): %o\n", a);                 // %o for octal

    // Additional formatting
    printf("Width and precision (%%10.2f): %10.2f\n", e); // %10.2f for float with width 10 and 2 decimal places
    printf("Padded integer (%%05d): %05d\n", a);           // %05d to pad with zeros

    return 0;
}

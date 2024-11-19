#include <stdio.h>

int main() {
    // Integer types
    int age = 42;
    unsigned int number_of_items = 100;
    long population_of_city = 1234567890;
    short number_of_students = 10;
    
    // Floating-point types
    float pi_value = 3.14159;
    double euler_number = 2.718281828459;
    
    // Character type
    char grade = 'A';
    
    // String type
    char greeting_message[] = "Hello, World!";
    
    // Format specifiers demonstration
    printf("Age (%%d): %d\n", age);// %d for integer
    printf("Number of Items (%%u): %u\n", number_of_items); // %u for unsigned integer
    printf("Population of City (%%ld): %ld\n", population_of_city); // %ld for long integer
    printf("Number of Students (%%hd): %hd\n", number_of_students); // %hd for short integer

    printf("Pi Value (%%f): %f\n", pi_value);// %f for float
    printf("Euler Number (%%lf): %lf\n", euler_number); // %lf for double
    printf("Euler Number in Exponential (%%e): %e\n", euler_number); // %e for exponential notation

    printf("Grade (%%c): %c\n", grade);// %c for single character
    printf("Greeting Message (%%s): %s\n", greeting_message); // %s for string

    // Demonstrating hexadecimal and octal numbers
    printf("Age in Hexadecimal (%%x): %x\n", age);// %x for hexadecimal
    printf("Age in Uppercase Hexadecimal (%%X): %X\n", age); // %X for uppercase hexadecimal
    printf("Age in Octal (%%o): %o\n", age);// %o for octal

    // Additional formatting
    printf("Value of Pi : %10.2f\n", pi_value); // %10.2f for float with width 10 and 2 decimal places
    printf("Age Padded with Zeros (%%05d): %05d\n", age);// %05d to pad with zeros

    return 0;
}

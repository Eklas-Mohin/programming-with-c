#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    printf("Temperature in Celsius: %.2f\n", celsius); 

    return 0;
}

/*
    The .2 in line 10 is a precision modifier, it specifies
    that the output should be rounded to 2 decimal places
*/
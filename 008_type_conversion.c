#include <stdio.h>

int main() {
    // Implicit Type Conversion
    int integer_num = 5;
    float float_num = 3.2;
    float result;

    // Implicit conversion happens here
    result = integer_num + float_num; // integer_num is implicitly converted to float

    printf("Implicit Type Conversion:\n");
    printf("Integer value: %d\n", integer_num);
    printf("Float value: %.2f\n", float_num);
    printf("Result (integer + float): %.2f\n\n", result);

    // Explicit Type Conversion
    double double_num = 7.56;
    int converted_num;

    // Explicit conversion using cast operator
    converted_num = (int)double_num; // double_num is explicitly converted to int

    printf("Explicit Type Conversion:\n");
    printf("Double value: %.2f\n", double_num);
    printf("Converted Integer value (int)double_num: %d\n", converted_num);

    return 0;
}

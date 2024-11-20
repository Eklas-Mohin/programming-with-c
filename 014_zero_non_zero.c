#include <stdio.h>

int main() {
    printf("\nAnything except 0 is true in C\n\n");

    // Check with positive integer
    if (1) {
        printf("1 -> True\n");
    }

    // Check with negative integer
    if (-7) {
        printf("-7 -> True\n");
    }

    // Check with zero
    if (0) {
        printf("0 -> True\n");
    } else {
        printf("0 -> False\n");
    }

    // Check with character
    if ('c') {
        printf("'c' -> True\n");
    }

    // Check with non-empty string
    if ("string") {
        printf("\"string\" -> True\n");
    }

    // Check with empty string
    if ("") {
        printf("\"\" -> True\n\n");
    }

    return 0;
}

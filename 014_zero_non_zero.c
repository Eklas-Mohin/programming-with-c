#include <stdio.h>

int main() {
    printf("\nAnything except 0 is true in C\n\n");

    // Check with positive integer
    if (1) {
        printf("1 -> Returns 1 which means True\n");
    }
    // Check with negative integer
    if (-7) {
        printf("-7 -> Returns 1 which means True\n");
    }

    // Check with zero
    if (0) {
        printf("0 -> Returns 1 which means True\n");
    } else {
        printf("0 -> Returns 0 which means False\n");
    }

    // Check with character
    if ('c') {
        printf("'c' -> Returns 1 which means True\n");
    }

    // Check with non-empty string
    if ("string") {
        printf("\"string\" -> Returns 1 which means True\n");
    }
    // Check with empty string
    if ("") {
        printf("\"\" -> Returns 1 which means True\n\n");
    }

    return 0;
}

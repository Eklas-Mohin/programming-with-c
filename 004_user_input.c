#include <stdio.h>

int main() {
    int student_id; 
    char letter_grade;
    float final_cgpa;

    // User input for an integer
    printf("Enter your student id: ");
    scanf("%d", &student_id); // &student_id is the address of variable

    // User input for a single character
    printf("Enter your grade: ");
    scanf("%c", &letter_grade); // %c is used for single character

    // User input for a floating-point number
    printf("Enter your final exam cgpa: ");
    scanf("%f", &final_cgpa); // &final_cgpa is the address of variable

    return 0;
}

// scanf() is a function used to take input

#include <stdio.h>

int main(void)
{
    int grade;
    printf("What grade did you get? ");
    scanf("%d", &grade);

    switch (grade) {                        // Controlling expression must be an integer (not floating point)
        case 4: printf("Excellent!");       // Case label 
                break;                      // Breaks out of this statement and execution 
        case 3: printf("Pretty good!");
                break;
        case 2: printf("Pretty bad!");
                break;
        case 1: case 0: printf("You are an idiot!"); // Two cases on the same line
                break;
        default: printf("That's not a grade!");  // The case if no other cases are triggered
                break;
    }
    return 0;
}

// Duplicate case labels aren't allowed
// Order doesn't matter
// Braces are not required - this is uncommon in C
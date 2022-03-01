#include <stdio.h>

/* Calculate a numerical grade into a letter grade */

int main(void)
{
    int grade, grade_tens;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100) {
        printf("Error, grade must be between 0 and 100.");
        return 0;
    }

    grade_tens = grade / 10;

    switch (grade_tens) {
        case 9: case 10:
            printf("Letter Grade: A");
            break;
        case 8:
            printf("Letter Grade: B");
            break;
        case 7:
            printf("Letter Grade: C");
            break;
        case 6:
            printf("Letter Grade: D");
            break;
        case 5: case 4: case 3: case 2: case 1: case 0:
            printf("Letter Grade: F");
    }

    return 0;
}
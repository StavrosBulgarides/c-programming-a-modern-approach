#include <stdio.h>

/* This switch statement excludes a break statement, so all downstream condition results display */

int main(void)
{
    int grade;
    printf("What grade did you get? ");
    scanf("%d", &grade);

    switch (grade) {
        case 4: printf("Excellent!");
        case 3: printf("Pretty good!");
        case 2: printf("Pretty bad!");
        case 1: printf("Terrible!");
        case 0: printf("So bad I want to cry!");
    }

    return 0;
}
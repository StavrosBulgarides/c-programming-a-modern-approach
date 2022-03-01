#include <stdio.h>

/* A program to calculate the number of digits a number contains */

int main (void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 9)
        number = 1;
    else if (number <= 99)
        number = 2;
    else
        number = 3;
        
    printf("The number has %d digits", number);

    return 0;
}
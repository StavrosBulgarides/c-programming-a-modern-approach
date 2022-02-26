#include <stdio.h>

// Program to reverse three numbers

int main (void)
{
    int num, n1, n2, n3;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);
 
    n1 = num / 100;         // division leaves amounts left over equal to units
    n2 = (num % 100) / 10;  
    n3 = (num % 100) % 10;
    printf("The reversal is: %d%d%d", n3, n2, n1);

    return 0;
}
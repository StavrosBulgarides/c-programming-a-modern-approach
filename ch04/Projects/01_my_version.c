#include <stdio.h>

// Program to reverse two numbers

int main (void)
{
    int num;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    printf("The reversal is %d%d", num % 10, num / 10); // the amount left over from %10 is your units, num / 10 will lose the units so represents the 10's
    
    return 0;
}
#include <stdio.h>

// Program to reverse an unknown number of values

int main (void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The reversal is: ");
    do {
        printf("%d", num % 10);     //remainder after dividing by 10 will give the value of the last digit
        num /= 10;                  //divide the value by 10 to lose the last digit and repeat
    } while (num != 0);             //keep on doing this until you run out of digits

    return 0;
}
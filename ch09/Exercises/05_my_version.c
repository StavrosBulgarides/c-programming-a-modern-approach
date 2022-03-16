/* Calculate the number of values in an integer */

#include <stdio.h>

int num_digits(int);                                            //pre-announce the type

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Number of digits in %d: %d", n, num_digits(n));     //put the value into num_digits
    return 0;
}

int num_digits(int n)
{
    int digits = 0;
    while (n > 0) {
        n /= 10;                                       //divide the number by 10 abd increment the counter
        digits++;
    }
    return digits;
}
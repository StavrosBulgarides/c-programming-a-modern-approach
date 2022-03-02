#include <stdio.h>

/* Calculate the number of digits in an integer */

int main(void)
{
    int digits=0, n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    do {
        n /= 10;
        digits++;
    } while (n > 0);    // as long as there is a number /number by 10 and increment the digits by 1

    printf("The number has %d digit(s). \n", digits);
    return 0;
}
#include <stdio.h>

int digit(int, int);        //pre-announce the type for digit argument as digit isn't yet defined

int main(void)
{
    int digit1, digit2;
    printf("Enter a number and the digit to return (from the right): ");
    scanf("%d %d", &digit1, &digit2);
    printf("Digit %d (from right) in %d: %d", digit2, digit1, digit(digit1, digit2));
    return 0;
}

/* Return the kth digit in n (from the right) */
int digit(int n, int k)
{
    int digit;

    while (k > 0) {
        digit = n % 10;
        n /= 10;
        k--;
    }
    return digit;
}

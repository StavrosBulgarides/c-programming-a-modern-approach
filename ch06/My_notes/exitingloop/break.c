/* Program to find if a number is prime */

#include <stdio.h>

int main(void)
{
    int d, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (d = 2; d < n; d++)     //walk through the increasing divisors from 2, incrementing by 1
        if (n % d ==0)          //find the lowest possible divisor (where there is 0 remainder)
            break;              //when you find a divisor, break out of this loop, with d = divisor
    
    if (d < n)                  //
        printf("%d is divisible by %d", n, d);
    else
        printf("%d is prime\n", n);

    return 0;
}
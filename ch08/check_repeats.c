/* Check a number for repeated digits */

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    bool digit_seen[10] = {false};      //initialise an array of 10 values all set to false
    int digit;                          //array element counter
    long n;                             //numerical entry

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {                     //repeat a loop working through the value digit by digit (see n /= 10)
        digit = n % 10;                 
        if (digit_seen[digit])
            break;
        digit_seen[digit] = true;
            n /= 10;
    }

    if (n > 0)
        printf("Repeated digit\n");
    else
        printf("No repeated digit\n");

    return 0;
}
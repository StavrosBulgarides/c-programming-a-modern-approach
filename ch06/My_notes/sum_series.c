/* Sum a series of numbers */

#include <stdio.h>

int main (void)
{
    int n, sum=0;

    printf("This program sums a series of integers\n");
    printf("Enter integers (0 to terminate): ");
    scanf("%d", &n);

    while (n != 0) {                // stay in the loop until 0 is entered
        sum += n;                   // add n to the previous sum
        scanf("%d", &n);            //enter the next value
    }
    printf("The sum is: %d\n", sum);

    return 0;
}
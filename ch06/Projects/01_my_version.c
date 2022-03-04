#include <stdio.h>

/* Program to find the largest in a series of numbers entered by the user, zero or -ve numbers act as an exit. */

int main(void)
{
    float n, largest;
    largest = 0.0f;

    for(;;) {
        printf("Enter a number: ");
        scanf("%f", &n);

        if (n == 0.0f){
            break;
        }
        if(n > largest) {
            largest = n;
        }
    }

    printf("The largest number entered was: %f3\n", largest);
    return 0;
}
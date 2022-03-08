/* Calculate the square root of a positive float using Newton's method */

#include <stdio.h>
#include <math.h>

int main (void)
{
    double x, y = 1, averageyxy;
    
    printf("Enter a positive number: ");
    scanf("%lf", &x);

    for (;;) {
        averageyxy = (y + x / y) / 2;
        if (fabs(y - averageyxy) < (.00001f * averageyxy))
             break;

        y = averageyxy;
        printf("Average of y and x/y: %lf\n", y);
    }

    return 0;
}
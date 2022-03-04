#include <stdio.h>

/* Calculate the greatest common divisor using Euclid's algorithm */

int main(void)
{
    int num, denom, m, n, store;
    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);

    m = num;
    n = denom;

    while(n != 0){
        store = m % n;          //remainder when m /n temporarily stored
        m = n;
        n = store;
    }

    printf("In lowest terms: %d/%d", num / m, denom / m);
    return 0;
}
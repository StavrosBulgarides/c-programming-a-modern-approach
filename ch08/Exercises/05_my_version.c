/* Fibonnaci numbers in an array */

#include <stdio.h>

int main (void)
{
    int i;
    int fib[40] = {0,1};
    
    for (i=2; i < sizeof(fib) / sizeof(fib[0]); i++) {
        fib[i] = fib[i - 2] + fib[i - 1];
        printf("%d ", fib[i]);
    }

    return 0;
}
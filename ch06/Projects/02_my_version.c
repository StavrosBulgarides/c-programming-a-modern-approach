#include <stdio.h>

/* Calculate the greatest common divisor using Euclid's algorithm */

int main(void)
{
    int m, n, store;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    while(n != 0){
        store = m % n;          //remainder when m /n temporarily stored
        m = n;                  // 
        n = store;
    }

    printf("Greatest common divisor: %d", m);

    return 0;
}
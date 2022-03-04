/* Print all the even number squares between 1 and n */

#include <stdio.h>

int main(void)
{
    int n, i;

    printf("Enter a value: ");
    scanf("%d", &n);

    for(i = 2; i * i <= n; i += 2)  //2 is the first even square; square < n to calculate stop; next even number
         printf("%d ", i * i);

    return 0;
}
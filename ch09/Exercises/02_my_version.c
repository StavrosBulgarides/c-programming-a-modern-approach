/* Return 1 if  both x & y fall between 0 and n-1 inclusive */

#include <stdio.h>

int check (int, int, int);

int main(void)
{
    printf("%d and %d: %d\n", 5, 10, check(5, 10, 15));
    printf("%d and %d: %d\n", 2, 3, check(2, 3, 1));
    return 0;
}

int check(int x, int y, int n)
{
    if ((x >= 0 && x < n - 1) && (y >= 0 && y < n - 1))
        return 1;

    return 0;
}
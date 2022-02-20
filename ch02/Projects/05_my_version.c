#include <stdio.h>

int x;

int main()
{
    printf("Enter a value for x: ");
    scanf("%d", &x);
    printf("%d", (3 * (x * x * x * x * x))
                 + (2 * (x * x * x * x))
                 - (5 * (x * x * x))
                 - (x * x)
                 + (7 * x)
                 - 6);

    return 0;
}
#include <stdio.h>

int main(void)

{
    int a, b, c, i, j;

    a = 5;
    b = 3;
    printf("%d %d\n", a / b , a % b);
    
    int d, e;

    i = 2;
    j = 3;
    printf("%d", (i + 10) % j);

    return 0;
}
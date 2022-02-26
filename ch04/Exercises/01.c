#include <stdio.h>

int main(void)

{
    int a, b, c;

    a = 5;
    b = 3;
    printf("%d %d\n", a / b , a % b);
    // 5 / 3, 5 % 3
    // 1, 2
    
    int d, e;

    d = 2;
    e = 3;
    printf("%d\n", (d + 10) % e);
    // (2+ 10) % 3
    // 12 % 3
    // 4

    int f, g, h;
    f = 7;
    g = 8;
    h = 9;
    printf("%d\n", (f + 10) % h / g);
    // ((7 + 10) % 9) /8
    // (17 % 9) /8
    // (8) / 8
    // 1 

    int i, j, k;
    i = 1;
    j = 2;
    k = 3;
    printf("%d\n", (i + 5) % (j + 2) / k);
    // ((1 + 5) % (2 + 2)) / 3
    // (6 % 4) / 3
    // 2 / 3
    // 0

    return 0;
}
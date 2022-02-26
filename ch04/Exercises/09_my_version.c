#include <stdio.h>

int main (void)
{
    int i, j;
    i = 7;
    j = 8;
    i *= j + 1;
    printf("%d %d\n", i, j);
    /*     
    i = (i * (j + 1))
    i = (7 * (8 + 1))
    i = (7 * 9)
    i = 63; j = 8; 
    */

    int k, l, m;
    k = l = m = 1;
    i += j += k;
    printf("%d %d %d\n", k, l, m);
    /* 
    i = i + (j = j + k)
    i = 1 + (j = 1 + 1)
    i = 1 + 2
    i = 3; j = 2; k = 1;
    */

   int n, o, p;
   n = 1;
   o = 2;
   p = 3;
   n -= o -= p;
   printf("%d %d %d\n", n, o, p);
    /* i = (i - (j = (j - k)))
    i = (1 - (j = (2 - 3)))
    i = (1 - (j = -1))
    i = (1 - -1)
    i = 2; j = -1; k = 3; */

    int q, r, s;
    q = 2;
    r = 1;
    s = 0;
    q *= r *= s;
    printf("%d %d %d\n", q, r, s);
    /* i = (i * (j = (j * k)))
    i = (2 * (j = (1 * 0)))
    i = (2 * (j = 0))
    i = (2 * 0)
    i = 0; j = 0; k = 0; */

    return 0;
}

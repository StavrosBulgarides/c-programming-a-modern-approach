#include <stdio.h>

int main (void)
{
    int i, j, k, l, m, n, o, p, q, r, s, t;

    i = 3; j = 4; k =5;
    printf("%d\n", i < j || ++j < k);
    printf("%d %d %d\n", i, j, k);
    /*
    i < j || (++j) < k
    (i < j) || ((++j) < k) 
    ((i < j) || ((++j) < k))

    3 < 4 || (j = 4 + 1) < 5
    (3 < 4) || (5 < 5)
    1 || 0
    1
    */
    
   l = 7; m = 8; n = 9;
   printf("%d\n", l - 7 && m++ < n);
   printf("%d %d %d\n", l, m, n);
    /*
    7 - 7 && (j++) < 9
    (7 - 7) && 8 < 9
    0 && (8 < 9)
    0 && 1
    0
    */

   o - 7; p = 8; q = 9;
   printf("%d\n", (o = p) || (p = q));
   printf("%d %d %d\n", o, p, q);
    /*
    (i = j) || (j - k)
    8 || (8 - 9)
    8 || -1
    1
    */

   r = 1; s = 1; t = 1;
   printf("%d\n", ++r ||  ++s && ++t);
   printf("%d %d %d\n", r, s, t);
    /*
    (++i) || (++j) && (++k)
    (++i) || ((++j) && (++k))
    ((++i) || ((++j) && (++k)))

    ((++i) || ((++j) && (k = 1 + 1)))
    ((++i) || ((j = 1 + 1) && 2))
    ((i = i + 1) || (2 && 2))
    (2 || 1)
    1
    */

    return 0;
}
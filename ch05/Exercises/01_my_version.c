#include <stdio.h>

int main()
{
    int i, j, k;
    i = 2; j = 3;
    k = i * j == 6;

    printf("%d\n",k);

    // k = ((i * j) == 6)       evaluate * in brackets first
    // k = (6 == 6)             6 == 6 is true, so equals 1
    // k = 1

    int l, m, n;
    i = 5; j = 10; k = 1;
    printf("%d\n", k > i < j);

    // (k > i) < j              <> has a left precedence, so in this case 1 > 5 is FALSE
    // 0 < 10
    // 1

    int o, p, q;
    o = 3; p = 2; q = 1;
    printf("%d\n", o < p == p < q);

    // (i < j) == (j < k)       Each of the conditions is tested independently
    // (3 < 2) == (2 < 1)
    // 0 == 0                   The sides are equal, so TRUE
    // 1

    int r, s, t;
    r = 3; s = 4; t = 5;
    printf("%d\n", r % s + r < t);

    // ((i % j) + i) < k        My initial thought was (i % j) + (i < k) which was wrong. Precedence
    // (3 + 3) < 5              3 % 4 is 3 per notes, on the basis that it can't be divided, so all remainder
    // 6 < 5
    // 0 

    return 0;
}



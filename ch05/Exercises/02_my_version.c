#include <stdio.h>

int main(void)
{
    int i, j, k, l, m, n, o, p, q, r;

    i = 10; j = 5;
    printf("%d\n", (!i) < j); // i is NOT a value (false) '!' is Logical NOT. True only if the operand is 0
    // ((!i) < j)
    // ((!10) < 5)
    // (0 < 5)
    // 1 
    
    k = 2;
    l = 1;
    printf("%d\n", !!k + !l);
    // ((!(!i)) + (!j)) 
    // ((!(!2)) + (!1))
    // ((!(!2)) + 0)
    // ((!0) + 0)
    // (1 + 0)
    // 1

    m = 5; n = 0; o = -5;
    printf("%d\n", m && n || o); // || is logical OR operator
    // ((i && j) || k)
    // ((5 && 0) || -5)
    // (0 || -5)
    // 1

    p = 1; q = 2; r = 3;
    printf("%d\n", p < q || r);
    // ((i < j) || k)
    // ((1 < 3) || 3)
    // (1 || 3)
    // 1

    return 0;
}
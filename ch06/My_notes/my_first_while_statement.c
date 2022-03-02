#include <stdio.h>

int main(void)
{
    int i, n;
    i = 1;

    printf("What do you want me to calculate up to? ");
    scanf("%d", &n);

    while (i < n) {         //controlling expression
        i = i * 2;          //loop body
        printf("%d\n", i);
    }                       //{} needed as there are two statements in the while loop body

    return 0;
}
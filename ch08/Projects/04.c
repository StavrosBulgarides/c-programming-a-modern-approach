#include <stdio.h>

#define LEN (int) (sizeof(a) / sizeof(a[0]))    //work out the length of the array

int main(void)
{
    int a[5], i;

    printf("Enter %d numbers: ", LEN);
    for (i = 0; i < LEN; i++)
        scanf("%d", &a[i]);

    printf("In reverse order:");
    for (i = LEN - 1; i >= 0; i--)
        printf(" %d", a[i]);
    printf("\n");

    return 0;
}

/* Prints a table of squares using a while statement */

#include <stdio.h>

int main(void)
{
    int i, n;

    printf("This program prints a table of squares using a while statement\n");
    printf("Print the number of squares in the table\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)        //initialise as 1, max n, increment the counter
        printf("%10d%10d\n", i, i * i);

    return 0;
}
#include <stdio.h>

/* A program to count down integers from a supplied value space launch style*/

int main(void)
{
    int i;
    printf("Countdown from? ");
    scanf("%d", &i);

    while (i > 0) {
        printf("T minus %d and counting\n", i);
        i --;
    }

    if (i == 0)
        printf("Lift off!");

    return 0;
}
#include <stdio.h>

/* A program to count down integers from a supplied value space launch style*/

int main(void)
{
    int i;
    printf("Countdown from? ");
    scanf("%d", &i);

/*
    for (i=i; i >0; i--)
        printf("T minus %d and counting\n", i);
*/
    for (; i >0; i--)   //you can omit the first expression
        printf("T minus %d and counting\n", i);

    if (i == 0)
        printf("Lift off!");

    return 0;
}
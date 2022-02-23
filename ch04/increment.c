#include <stdio.h>

int main()
{
    int i,j;

    j = i = 1;

    // Pre-increment. Increments i straight away
    printf("i is %d\n", ++i);       //prints i is 2
    printf("i is %d\n", i);         //prints 1 is 2

    // Post-increment. Increments i afterwards
    printf("j is %d\n", j++);       //prints i is 1
    printf("j is %d\n", j);         //prints 1 is 2

    return 0;
}
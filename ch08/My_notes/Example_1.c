/* A program that reverses a series of numbers */

#include <stdio.h>

int main (void)
#define N 10        //define a constant to be used for the length of the array

{
    int a[N], i;     //define an array with 10 items and an increment counter

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i ++)
        scanf("%d", &a[i]);     //enter the element of the array at location i

    printf("In reverse order:");
    for (i = N-1; i >=0; i--)   //increment from the last element to th first, backwards
        printf(" %d", a[i]);    //print the element of the array at location i
    printf("\n");

    return 0;
}
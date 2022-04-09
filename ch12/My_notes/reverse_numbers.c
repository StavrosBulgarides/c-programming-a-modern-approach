/* Reverses a series of numbers using pointer logic */

//Watch out for pointer declarations

#include <stdio.h>

#define N 10            //define the length of the array

int main(void)
{
    int a[N], *p;

    printf("Enter %d numbers:\t", N);
    for (p = a; p < a + N; p++){        //simplification of pointer loop logic stepping through arrays
        scanf("%d", p);                 //this is not declared as a pointer (*)
    }

    printf("In reverse order:\t");
    for (p = a + N-1; p>=a; p--){       //simplification of pointer loop logic stepping through arrays in reverse order
        printf("%d ", *p);              //this is declared as a pointer (*)        
    }
    printf("\n");

    return 0;
}
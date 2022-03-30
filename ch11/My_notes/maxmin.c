/* Finds the largest and smallest elements in an array */

#include <stdio.h>

#define N 10                                        //number of values

void max_min(int a[], int n, int *max, int *min);   //prototypes including pointers

int main(void)
{
    int b[N], i, big, small;                        //define integers and array

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &b[i]);

    max_min(b, N, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

    return 0;
}

void max_min(int a[], int n, int *max, int *min)
{
    int i;

    *max = *min = a[0];
    for (i = 1; i < N; i++) {
        if (a[i] > *max)                                //if the value is > max then update max
            *max = a[i];
        else if (a[i] < *min)                           //if the value is < min the update min 
            *min = a[i];
    }
}
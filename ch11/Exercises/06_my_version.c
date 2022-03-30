#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest);   //prototypes

#define N 10        //max number of elements

int main(void)
{
    int a[N], increment;
    int largest = 0, second_largest = 0, i;

    printf("Enter %d values: ", N);
    for (increment = 0; increment < N; increment++){
         scanf("%d", &a[increment]);        //remember you need to increment by character to get values into an array
    }
   
    printf("Array contents: ");
    for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
        printf("%d ", a[i]);                //print the array contents - remember increments 1 by 1
    printf("\n");

    find_two_largest(a, sizeof(a) / sizeof(a[0]), &largest, &second_largest);   //size of determines length of array generically
    printf("Largest: %d\nSecond Largest: %d\n", largest, second_largest);
    return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)       //pass in array, length etc.
{
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] > *largest){
            *second_largest = *largest;
            *largest = a[i];    //if a value is largest then put it as largest and move the largest to second place
        } else if (a[i] < *largest && a[i] > *second_largest){
            *second_largest = a[i]; //if an item is <largest but >second then put the value in second location
        }
        printf("Iteration %d: Largest: %d, Second Largest: %d\n",
                i, *largest, *second_largest);
    }
    
}
/* Reverses a series of numbers using a variable length array */

#include <stdio.h>
int main(void)
{
    int i, n;

    printf("How many numbers do you want to reverse? ");
    scanf("%d", &n);

    int a[n];                           //length of array depends on variable n. This is a variable-length array

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);             //read the input and insert it into the indexed location in the array
    }

    printf("In reverse order: ");
    for (i = n -1; i >= 0; i--) {       //reverse the counting
        printf("%d", a[i]);             //return the item from the indexed location in the array
    }
    return 0;
}
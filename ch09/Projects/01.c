#include <stdio.h>

void selection_sort(int a[], int n);        //define type of the function elements before they are first called

int main(void)
{
    char ch;
    int i, entries = 0, a[30];
    printf("Enter a series of up to 30 integers: ");
    for (i = 0; i < 30 && (ch = getchar() != '\n'); i++) {  //add to the array if entry is not return & < 30 char
        scanf(" %d", &a[i]);
        entries++;      //keep a count of the entries
    }

    printf("Unsorted array: ");
    for (i = 0; i < entries; i++)
        printf("%d ", a[i]);

    selection_sort(a, entries);

    printf("\nSorted array: ");
    for (i = 0; i < entries; i++)
        printf("%d ", a[i]);

    return 0;
}

/* Recursively sorts an array using the selection sort algorithm.
 * Sorts largest element each recursive call, rather than smallest.
 * Uses tail recursion. */
void selection_sort(int a[], int n)
{
    if (n == 0) return;
    
    int i, index_largest = 0;       //initial conditions for sort

    for (i = 1; i < n; i++) {
        if (a[i] > a[index_largest])
            index_largest = i;
    }

    int largest = a[index_largest];
    a[index_largest] = a[n-1];
    a[n-1] = largest;

    selection_sort(a, n - 1);
}

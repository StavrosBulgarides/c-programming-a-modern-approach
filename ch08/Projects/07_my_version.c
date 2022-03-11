#include <stdio.h>

#define NUM_ROWS    5
#define NUM_COLS    5

int main(void)
{
    int arr[NUM_ROWS][NUM_COLS] = {0}, row, col, total;

    // User entries to populate array
    for (row = 0; row < NUM_ROWS; row++) {
        printf("Enter row %d:\t", row + 1);
        scanf("%d %d %d %d %d", &arr[row][0], &arr[row][1], 
                &arr[row][2], &arr[row][3], &arr[row][4]);
    }

    //Calculate row totals
    printf("Row totals:\t");
    for (row = 0; row < NUM_ROWS; row++) {
        total = 0;
        for (col = 0; col < NUM_COLS; col++) {
            total += arr[row][col];
        }
        printf("%d ", total);
    }

    //Calculate column totals
    printf("\nColumn totals:\t");
    for (col = 0; col < NUM_COLS; col++) {
        total = 0;
        for(row = 0; row < NUM_ROWS; row++) {
            total += arr[row][col];
        }
        printf("%d ", total);
    }

    return 0;
}

/* Prints a table of compound interest */

#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))    //used to calculate number of elements in an array dynamically

int main(void)
{
    int i, rate, num_years, year;
    float initial_balance;
    double value[2];

    printf("Enter initial balance: ");
    scanf("%f", &initial_balance);
    printf("Enter interest rate: ");
    scanf("%d", &rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\nYears");
    for (i = 0; i < NUM_RATES; i++) {       //print the number of rates set by the value array
        printf("%6d%%", rate + i);          //increment by 1% each pass
        value[i] = initial_balance;
    }
    printf("\n");

    for (year = 1; year <= num_years; year++) {
        printf("%3d     ", year);           //Create the 'year' row
        for (i = 0; i < NUM_RATES; i++) {   //within the year row print the correct number of post interest values
            value[i] += (rate + i) / 100.0 * value[i];
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }
    return 0;
}
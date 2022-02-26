#include <stdio.h>

/* Calculate a food label checksum */

int main()
{
    int val_1, val2_1, val2_2, val2_3, val2_4, val2_5, val3_1, val3_2, val3_3, val3_4, val3_5,
        first_sum, second_sum, total;

    printf("Enter the code in the form XXXXXXXXXXX: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &val_1, &val2_1, &val2_2, &val2_3, &val2_4, &val2_5, &val3_1, &val3_2, &val3_3, &val3_4, &val3_5);

    first_sum = (val_1 + val2_2 + val2_4 + val3_1 + val3_3 + val3_5);
    second_sum = (val2_1 + val2_3 + val2_5 + val3_2 + val3_4);

    total = ((first_sum * 3) + second_sum);

    printf("Check digit: %d\n", 9 - ((total -1) %10));

    return 0;
}
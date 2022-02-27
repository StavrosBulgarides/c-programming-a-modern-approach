#include <stdio.h>

/* Calculate a broker's commission */

int main(void)
{
    float commission, value, min_commission;
    min_commission = 39.00f;

    printf("Enter value of the trade: ");
    scanf("%f", &value);

    if (value < 2500.000f)
        commission = 30.00f + 0.17f * value;
    else if (value < 6259.00f)
        commission = 56.00f + 0.066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + 0.034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + 0.0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + 0.0011f * value;
    else
        commission = 255.00f + 0.0009f * value;

    if (commission < min_commission)
        commission = min_commission;

    printf("Commission: £%.2f", commission);

    return 0;
}
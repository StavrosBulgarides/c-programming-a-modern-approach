/* Program to indicate the earlier of two dates in the calendar */

#include <stdio.h>

int main(void)
{
    int dd, mm, yy1, dd2, mm2, yy2, earliest;

    printf("Enter first date (dd/mm/yy): ");
    scanf("%d/%d/%d", &dd1, &mm1, &yy1);
    printf("Enter second date (dd/mm/yy): ");
    scanf("%d/%d/%d", &dd2, &mm2, &yy2);

    if (yy1 < yy2)
        earliest = 1;
    else if (yy2 < yy1)
        earliest = 2;
    else if (mm1 < mm2)
        earliest = 1;
    else if (mm2 < mm1)
        earliest = 2;
    else if (dd1 < dd2)
        earliest = 1;
    else if (dd2 < dd1)
        earliest = 2;
    
    if (earliest == 1)
        printf("The earliest date is %d/%d/%d", dd1, mm1, yy1);
    else if (earliest == 2)
        printf("The earliest date is %d/%d/%d", dd2, mm2, yy2);
    else
        printf("The dates are the same");
    
    return 0;
}
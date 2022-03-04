/* Calculate the remaining balance on a loan after a series of payments */

#include <stdio.h>

int main()
{
    float loan, interest_rate, monthly_payment;
    int num_payments, i;

    printf("Enter the amount of the loan in £: ");
    scanf("%f", &loan);
    printf("Enter the interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter the monthly payment in £: ");
    scanf("%f", &monthly_payment);

    float monthly_interest = 1 + ((interest_rate / 100) / 12);

    printf("Enter the number of payments made: ");
    scanf("%d", &num_payments);

    for (i = 1; i <= num_payments; i++) {
        loan *= monthly_interest;                                  //gross up the loan
        loan -= monthly_payment;                                   //take off the monthly payment
        printf("Balance remaining payment %d:\t£%.2f\n", i, loan);
    }
    return 0;
}
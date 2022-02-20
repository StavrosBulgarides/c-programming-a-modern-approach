#include <stdio.h>

int main()
{
    float loan, interest_rate, monthly_payment;

    printf("Enter the amount of the loan in £: ");
    scanf("%f", &loan);
    printf("Enter the interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter the monthly payment in £: ");
    scanf("%f", &monthly_payment);

    float monthly_interest = 1 + ((interest_rate / 100) / 12);

    loan *= monthly_interest; //gross up the loan
    loan -= monthly_payment; //take off the monthly payment
    printf("Balance remaining after first payment:\t£%.2f\n", loan);

    loan *= monthly_interest;
    loan -= monthly_payment;
    printf("Balance remaining after second payment:\t£%.2f\n", loan);

    loan *= monthly_interest;
    loan -= monthly_payment;
    printf("Balance remaining after third payment:\t£%.2f\n", loan);

    return 0;
}
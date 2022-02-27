#include <stdio.h>

/* Program to calculate the European Article Number (EAN) */

int main(void)
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    int step_one, step_two, step_three, step_four, step_five;

    printf("Enter the first 12 digits an an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l);

    step_one = b + d + f + h + j + l;
    step_two = a + c + e + g + i + k;
    step_three = (step_two + (step_one * 3)) - 1;
    step_four = step_three % 10;
    step_five = 9 - step_four;

    printf("Check digit: %d\n", step_five);

    return 0;
}
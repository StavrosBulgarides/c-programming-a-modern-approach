#include <stdio.h>

int main(void)
{
    int digits_seen[10] = {0};      //this is the key array to keep track of the incidence of a number
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {                 //loop to iterate through n 
        digit = n % 10;
        digits_seen[digit]++;       //iterate a counter if a particular value is seen
        n /= 10;                    //divide by 10 to go to the next number
    }

    printf("Digit:\t\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\n");
    printf("Occurrences: ");
    for (n = 0; n < 10; n++)
        printf("\t%d", digits_seen[n]);

    return 0;
}

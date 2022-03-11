#include <stdio.h>

int main(void)
{
    int digits_seen[10] = {0};          //this is the key array to keep track of the incidence of a number
    int digit;
    long n;

    for (;;) {                          //in all scenarios unless you see a break..
        printf("Enter a number (0 to terminate): ");
        scanf("%ld", &n);
        if (n <= 0)                     //0 to exit/break
            break;

        while (n > 0) {                 //loop to iterate through n 
            digit = n % 10;
            digits_seen[digit]++;       //iterate a counter if a particular value is seen
            n /= 10;                    //divide by 10 to go to the next number
        }

        printf("Digit:\t\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\n");
        printf("Occurrences: ");
        for (n = 0; n < 10; n++){
            printf("\t%d", digits_seen[n]);
            digits_seen[n] = 0;         //reset the array for the next number. Comment out for array to continue
        }
        printf("\n\n");
    }  
    return 0;
}

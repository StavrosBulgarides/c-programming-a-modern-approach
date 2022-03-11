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
        digits_seen[digit]++;
        n /= 10;                    //divide by 10 to go to the next number
    }

    printf("Repeated digit(s): ");
    for (n = 0; n < 10; n++) {
        if (digits_seen[n] > 1)
            printf("%ld ", n);
    }

    return 0;
}

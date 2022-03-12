/* Test whether a number is prime */

#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n)            //function to test prime number. Supply with integer, returns bool
{
    int divisor;
    if (n <= 1)
        return false;
    for(divisor = 2; divisor * divisor <=n; divisor++)  //if divisor * divisor = n then we have a solution
    {    
        if (n % divisor == 0)
            return false;
    return true;
    }
}

int main(void) 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (is_prime(n))
        printf("Prime\n");
    else
        printf("Not prime\n"); 

    return 0;
}
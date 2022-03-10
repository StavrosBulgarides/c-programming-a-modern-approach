/* Program to give the length of a text string */

#include <stdio.h>

int main(void)
{
    int len = 0;

    printf("Enter a message: ");
    while (getchar() != '\n')       //increment the length counter until a newline
        len++;
    
    printf("Your message was %d characters long\n", len);

    return 0;
}
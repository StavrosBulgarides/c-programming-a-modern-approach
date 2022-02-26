#include <stdio.h>

// Program to calculate the octal value of an input string

int main(void)
{
    int num; 
    printf("Enter a number between 0 and 32,767: ");
    scanf("%d", &num);

    int a,b,c,d,e;
    a = b = c = d = e = 0;

    a = (num) % 8;
    b = (num / 8) % 8;
    c = ((num / 8) / 8) % 8;
    d = (((num / 8) / 8) / 8) % 8;
    e = ((((num / 8) / 8) / 8) / 8) % 8;

    printf("In octal your number is %d%d%d%d%d", e, d, c, b, a);

    return 0;
}
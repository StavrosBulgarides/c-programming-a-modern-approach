#include <stdio.h>

/* Prints int and float values in various formats */

int main(void)
{
    int i;
    float x;

    i = 40;
    x = 839.21f;

    printf("|%d |%5d |%-5d |%5.3d |\n", i, i, i,i);
    //%d: i in decimal form with a minimal amount of space
    //%5d i in decinal form minimum 5 character space
    //%-5d i in decimal form minimum 5 characters left justified
    //%5.3d i in decimal form min 3 digits and 5 character space
    printf("|%10.3f |%10.3e |%-10g |\n",x,x,x);
    //%10.3f x in fixed decimal form, 10 characters, 3 after the decimal point
    //%10.3e x in exponential form
    //%-10g x in 10 characters, left justified
}
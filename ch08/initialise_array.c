/* Initialise an array */

#include <stdio.h>

int main (void)
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};                 //array initialization
    int b[15] = {[1] = 100, [5] = 200, [10] = 250};     //designated initializers

    printf("%d\n", a[5]);
    printf("%d", b[6]);

    return 0;
}
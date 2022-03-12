/* Determine the length of an array in an argument */

#include  <stdio.h>

int sum_array(int a[], int len)
{
    int i, sum = 0;
    for (i = 0; i < len; i++)
    {
        sum += a[i];
    }
    return sum;
}

int main(void)
{
    int b, i, len = 5;
    
    //printf("How many values would you like to enter?: ");
    //scanf("%d", &len);

    int a[5] = {};      //C doesn't let you set this to <len> 

    printf("Enter %d values in the array: ", len);
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    b = sum_array(a,len);
    printf("The sum of the %d items in the array is: %d\n", len, b);
    return 0;
}
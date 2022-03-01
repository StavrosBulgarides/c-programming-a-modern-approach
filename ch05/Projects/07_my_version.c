#include <stdio.h>

/* Program to find the largest and smallest of four integers entered by the user */

int main(void)
{
    int int1, int2, int3, int4, largest, smallest;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &int1, &int2, &int3, &int4);

    if (int1 >= int2) {          //set up the size of the initial two numbers to compare future inputs against
        largest = int1;
        smallest = int2;
    } else if (int1 <= int2){
        largest = int2;
        smallest = int1;
    }

    if (int3 >= largest)         // allocate the position of the third number to largest or smallest if applicable
        largest = int3; 
    else if (int3 <= smallest)
        smallest = int3;

    if (int4 >= largest)         // allocate the position of the fourth number to largest or smallest if applicable
        largest = int4; 
    else if (int4 <= smallest)
        smallest = int4;        

    printf("The largest integer is %d\n", largest);
    printf("The smallest integer is %d", smallest);

    return 0;
}
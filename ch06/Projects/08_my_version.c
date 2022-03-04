/* print a 1 month calendar */

#include <stdio.h>

int main(void)
{
    int days, start;

    printf("Enter number of days in the month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week: ");
    scanf("%d", &start);

    int i;
    int iterations = days - (start - 1);    //the total number of times we need to run the for loop = #days
    int day = 1;                            //first day of month will be 1 but might start on slot X

    for(i = 1; i <= iterations; i++) {      //keep going as until the number of loops matches the # days needed
        if (i < start)
            printf("   ");
        else
            printf("%3d", day++);           //3 spaces to ensure leading space for 2 digit characters
    
    if (i % 7 == 0)                         //wrap at the end of the week. Day = 7
            printf("\n");
    }

    return 0;
}
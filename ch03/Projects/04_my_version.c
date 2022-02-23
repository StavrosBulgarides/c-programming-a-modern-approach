#include <stdio.h>

/*Program to reformat telephone number supplied in the format (xxx) xxx-xxxx to xxx.xxx.xxxx */

int main(void)
{
    int num_1, num_2, num_3;
    
    printf("Enter telephone number in the format (xxx) xxx-xxxx: ");
    scanf("(%d)%d-%d", &num_1, &num_2, &num_3);
    printf("%d.%d.%d", num_1, num_2, num_3);
}
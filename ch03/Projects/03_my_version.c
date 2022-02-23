#include <stdio.h>

/* Program to break down an International Book Number */

int main(void)
{
    int prefix, group_id, publisher, item, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &group_id, &publisher, &item, &check_digit);

    printf("GS1 prefix: %d\n"
            "Group ID: %d\n"
            "Publisher: %d\n"
            "Item: %d\n"
            "Check digit: %d\n",
            prefix, group_id, publisher, item, check_digit);

    return 0;
}
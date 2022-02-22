#include <stdio.h>

/* Program to format user information into a table */

int main()
{
    int item_number, day, month, year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n"); //double tabbed for space
    printf("\t\tPrice\t\tDate\n"); //split across multiple lines
    printf("%d\t\t£%6.2f\t\t%.2d/%.2d/%.4d", item_number, unit_price, day, month, year);
    // left aligned by default, 
}
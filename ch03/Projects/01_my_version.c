#include <stdio.h>

int main() 
{
    int day, month, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%day /%day /%day", &month, &day, &year);
    printf("You entered the date: %4d.%2d.%2d", year, month, day);
}
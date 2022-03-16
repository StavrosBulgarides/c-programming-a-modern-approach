/* Function that returns the day of the year */

#include <stdio.h>

int day_of_year(int, int, int);

int main(void)
{
    int day, month, year;
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%2d/%2d/%4d", &day, &month, &year);
    printf("Day of the year for date %.2d/%.2d/%.4d: %d\n", day, month, year, day_of_year(day, month, year));

    return 0;
}

int day_of_year(int day, int month, int year)
{
    for(int i = 0; i < month; i++)
    {
        switch(i)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                day += 31;
            case 4:
            case 6:
            case 9:
            case 11:
                day += 30;
            case 2:
                if (((year % 4 == 0) && (year % 100 != 0))
                   || (year % 400 == 0))
                    day += 29;
                else
                    day += 28;
        }
    }
    return day;
}
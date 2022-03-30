#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);        //prototypes

int main(void)
{
    long total_sec;     //long as exceeds 
    int hour, minute, second;
    
    printf("Enter the number of seconds: ");
    scanf("%ld", &total_sec);

    split_time(total_sec, &hour, &minute, &second);
    printf("Hours: %d\nMinutes %d\nSeconds %d\n", hour, minute, second);
    return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *hr = total_sec / 3600;
    total_sec -= *hr * 3600;
    *min = total_sec / 60;
    total_sec -= *min * 60;
    *sec = total_sec;
}
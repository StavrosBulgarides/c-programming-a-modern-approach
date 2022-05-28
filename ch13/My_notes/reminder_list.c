/* Prints a one month reminder list */

#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50   /* Maximum number of reminders */
#define MSG_LEN 60      /* Max length of reminder message */

int read_line(char str[], int n);

int main(void)
{
    char reminders[MAX_REMIND][MSG_LEN+3];
    char day_str[3], msg_str[MSG_LEN+1];
    int day, i, j, num_remind = 0;

    

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i=0;

    while((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
        str[i] = '\0';
        return i;
}
#include <stdio.h>

int main(void)
{
    char str[] = "Are we having fun yet?";

    printf("%s\n", str);        //print the whole string
    printf("%.6s\n", str);      //print the first 6 characters
    
    puts(str);                  //print the whole string. Automatically includes a \n character

    return 0;
}
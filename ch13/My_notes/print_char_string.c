#include <stdio.h>

int main(void)
{
    char date1[8] = "June 14";      //char string is 1 more than message
    char date2[9] = "June 14";      //will save extra null '\0' character
    char date3[7] = "June 14";      //will not save a null '\0' character
    char date4[] = "June 14";       //empty array will allocate characters as met
    char *date5 = "June 14";

    //array version can be modified
    //pointer points to a string literal - string literals should not be modified

    printf("%s\n", date1);          //%s is character string
    printf("%s\n", date2);
    printf("%s\n", date3);
    printf("%s\n", date4);
    printf("%s", date5);            //no & needed     

    return 0;
}
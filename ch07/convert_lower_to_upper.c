/* Program to change lowercase input to uppercase text */

#include <stdio.h>
#include <ctype.h>      //needed to support 'toupper' function

int main (void)
{
    char ch;
    
    printf("Enter your text string: ");
    
    do{
        scanf("%c", &ch);       //take inputs
        ch = toupper(ch);   
        printf("%c", ch);       //print each character that has been converted to uppercase 
    } while (ch != '\n');       //until the new line character

    return 0;
}
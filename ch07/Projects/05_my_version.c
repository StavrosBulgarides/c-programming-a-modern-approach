/* Program to calculate a scrabble score */

#include <stdio.h>
#include <ctype.h>      //for toupper; avoids case issues

int main (void)
{
    char ch;
    int word_value = 0;
    
    printf("Enter a word: ");           //doesn't need a scanf as getchar is used in while loop

    while ((ch = getchar()) != '\n')
        switch (toupper(ch)) {
            case 'A': case 'E': case 'I': case 'L': case 'N': case 'O':
            case 'R': case 'S': case 'T': case 'U':
                word_value += 1;
                break;
            case 'D': case 'G':
                word_value +=2;
            case 'B': case 'C': case 'M': case 'P':
                word_value +=3;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                word_value += 4;
                break;
            case 'K':
                word_value += 5;
                break;
            case 'J': case 'X':
                word_value += 8;
                break;
            case 'Q': case 'Z':
                word_value += 10;
                break;
        }
    printf("Scrabble value: %d", word_value);

    return 0;
}
/* Program to calculate the average length of a word in a sentence */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    float char_count = 0.0f, word_count = 0.0f;
    char ch;

    printf("Enter a sentence: ");

    while ((ch = getchar()) !='\n') {       //until enter is provided
        if (ch == ' ')                      //words assumed to increment on a space
            word_count += 1;
        else
            char_count +=1;
    }
    word_count += 1;                        //the enter doesn't increment the word count

    printf("There were %.0f words\n", word_count);
    printf("There were %.0f characters\n", char_count);
    printf("The average number of characters per word was %.2f", (char_count / word_count));

    return 0;
}
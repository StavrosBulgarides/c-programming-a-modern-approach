#include <stdio.h>

#define SENT_LEN    10

int main(void)
{
    char sentence[SENT_LEN+1];

    printf("Enter a sentence:\n");
    scanf("%s", sentence);

    puts(sentence);

    return 0;
}
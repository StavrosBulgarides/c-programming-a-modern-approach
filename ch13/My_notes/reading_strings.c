#include <stdio.h>

#define SENT_LEN    10

int main(void)
{
    char sentence1[SENT_LEN+1];
    char sentence2[SENT_LEN+1];

    printf("Enter a sentence:\n");
    scanf("%s", sentence1);              //scanf will only save items up until the first space

    puts(sentence1);

    printf("Second sentence:\n");
    gets(sentence2);                     //gets will save the whole sentence. This will fail as it's unsafe

    puts(sentence2);

    return 0;
}
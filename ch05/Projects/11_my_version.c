#include <stdio.h>

/* Ask the user for a two digit number then print the text of that number */

int main(void)
{
    int num, tens, units;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    if (num < 0 || num > 99) {
        printf("The number must be between 0 and 99");
    }

    tens = num / 10;
    units = num % 10;

    printf("You entered the number ");

    if (tens == 1) {
        switch (units) {
            case 0: printf("ten.");
            break;
            case 1: printf("eleven.");
            break;
            case 2: printf("twelve.");
            break;
            case 3: printf("thirteen.");
            break;
            case 4: printf("fourteen.");
            break;
            case 5: printf("fifteen.");
            break;
            case 6: printf("sixteen.");
            break;
            case 7: printf("seventeen.");
            break;
            case 8: printf("eighteen.");
            break;
            case 9: printf("nineteen.");
            break;
        }       
    } else {
        switch (tens) {
            case 2: printf("twenty-");
                    break;
            case 3: printf("thirty-");
                    break;
            case 4: printf("forty-");
                    break;
            case 5: printf("fifty-");
                    break;
            case 6: printf("sixty-");
                    break;
            case 7: printf("seventy-");
                    break;
            case 8: printf("eighty-");
                    break;
            case 9: printf("ninety-");
                    break;
        }

        switch (units) {
            case 1: printf("one.");
                    break;
            case 2: printf("two.");
                    break;
            case 3: printf("three.");
                    break;
            case 4: printf("four.");
                    break;
            case 5: printf("five.");
                    break;
            case 6: printf("six.");
                    break;
            case 7: printf("seven.");
                    break;
            case 8: printf("eight.");
                    break;
            case 9: printf("nine.");
                    break;
        }
      }
    return 0;
}
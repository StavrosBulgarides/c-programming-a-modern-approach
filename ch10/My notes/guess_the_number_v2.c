/* Asks the user to guess a generated number 
No external variable*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100      //maximum number for the random number generator

/* Prototypes */
void initialize_number_generator(void);
int new_secret_number(void);
//void choose_new_secret_number(void);      ***** REMOVED *****
void read_guesses(int secret_number);

int main(void)
{
    char command;
    int secret_number;      //declared in the function

    printf("Guess the secret number between 1 and %d\n", MAX_NUMBER);
    initialize_number_generator();
    do {
        secret_number = new_secret_number();
        printf("A new secret number has been chosen.\n");
        read_guesses(secret_number);
        printf("Play again? [Y/N] ");
        scanf(" %c", &command);
        printf("\n");
    } while (command == 'Y' || command == 'y');

    return 0;
}

/* Initialise number generator using the time of day*/
void initialize_number_generator(void)
{
    srand((unsigned) time(NULL));
}

/* New secret number returns a value between 1 and MAX_NUMBER */
int new_secret_number(void)
{
    return rand() % MAX_NUMBER + 1;
}

/* Choose new secret number between 1 and MAX_NUMBER and store it in secret number
void choose_new_secret_number(void)
{
    secret_number = rand() % MAX_NUMBER + 1;
} */

/* Read user guesses and tells the user if they are too high or low
Returns the total number of guesses when the guess is correct */
void read_guesses(int secret_number)
{
    int guess, num_guesses = 0;
    for (;;) {
        num_guesses++;
        printf("Enter guess: ");
        scanf("%d", &guess);
        if (guess == secret_number) {
            printf("You won in %d guesses!\n\n", num_guesses);
            return;
        } else if(guess < secret_number)
            printf("Too low - try again.\n");
        else
            printf("Too high - try again.\n");
    }
}
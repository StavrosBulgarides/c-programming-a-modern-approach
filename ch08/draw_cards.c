/* Deals a random hand of cards */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>                                       //used to feed into the random number generator

#define NUM_SUITS   4
#define NUM_RANKS   13

int main(void) 
{
    bool in_hand[NUM_SUITS][NUM_RANKS] = {false};       //initialise a 2D array 'card drawn' check; false for all cards (4 rows x 13 columns)
    int num_cards, rank, suit;
    const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a'}; //initialise a constant array
    const char suit_code[] = {'c', 'd', 'h', 's'};

    srand((unsigned) time(NULL));                       //passing time to the random number generator prevents the same random numbers

    printf("Enter the number of cards in the hand: ");
    scanf("%d", &num_cards);

    printf("Your hand: ");
    while(num_cards > 0){                               //whilst there are still cards left to pick
        suit = rand() % NUM_SUITS;                      //picks a random suit
        rank = rand() % NUM_RANKS;                      //picks a random rank
        if (!in_hand[suit][rank]) {                     //if the card hasn't been picked already then
            in_hand[suit][rank] = true;                 //mark it as picked [true]
            num_cards -- ;                              //reduce the total number of cars left to pick
            printf(" %c%c", rank_code[rank], suit_code[suit]);
        }
    }
    printf("\n");

    return 0;
}

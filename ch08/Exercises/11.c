#include <stdio.h>

int main (void)
{
    char checker_board[8][8] = {0};                                     //initialise an empty array

    int row, col;
    for (row = 0; row < 8; row++) {                                     //iterate through each row

        for (col = 0; col < 8; col++) {                                 //iterate through each column
            checker_board[row][col] = (row + col) % 2 == 0 ? 'B' : 'R'; 
                                                        //if row + col is an even number then B, else R
            printf("%c, ", checker_board[row][col]);
        }
        printf("\n");
    }

    return 0;
}

//Can alternate show R top left by (row + col) % 2 !=0
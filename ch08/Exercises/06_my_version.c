/* Store the numbers to display a digital number */

#include <stdio.h>

int main (void)
{
    #define num_segments 10 //fixed number of segments
    #define seg_length 7    //fixed array length
    
    const int segments[num_segments] [seg_length] = {{1, 1, 1, 1, 1, 1, 0},
                                 {0, 1, 1, 0, 0, 0, 0},
                                 {1, 1, 0, 1, 1, 0, 1},
                                 {1, 1, 1, 1, 0, 0, 1},
                                 {0, 1, 1, 0, 0, 1, 1},
                                 {1, 0, 1, 1, 0, 1, 1},
                                 {1, 0, 1, 1, 1, 1, 1},
                                 {1, 1, 1, 0, 0, 0, 0},
                                 {1, 1, 1, 1, 1, 1, 1},
                                 {1, 1, 1, 1, 0, 1, 1}};

    int c, i, n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 0; i < seg_length; i++){
            printf("%d", segments[n][i]);
        }
    return 0;
}
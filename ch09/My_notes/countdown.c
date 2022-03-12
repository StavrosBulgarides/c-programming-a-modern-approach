/* Print a countdown using a function */

#include <stdio.h>

void print_count (int n){                       //the function doesn't return anything, so (void) - no values
    printf("T minus %d and counting\n", n);
}

int main(void){
    int i;
    int counter;

    printf("Enter the countdown clock start: ");
    scanf("%d",&counter);

    for (i = counter; i > 0; i--){
        print_count(i);
    }

    return 0;
}
#include <stdio.h>

void swap(int *p, int *q);                  //prototype definition

int main(void)
{
    int i, j;
    printf("Enter two numbers: ");
    scanf("%d %d", &i, &j);
    
    printf("Your numbers were: \t\t%d, %d\n", i, j);
    swap(&i, &j);
    printf("The numbers swapped are: \t%d, %d\n", i, j);

    return 0;
}

void swap(int *p, int *q)                   //pointers into function
{
    int temp = *p;
    *p = *q;
    *q = temp;    
}
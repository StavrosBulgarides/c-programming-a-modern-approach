#include <stdio.h>

int main(void)
{
	// declare variables 
	int a = 3;
	float b = 4;
	char c = 5;

    //declare and initialise pointer
    int *d = &a;

	printf("Value of a: %d\t\tAddress of a: %p\n", a, &a);  //&a to return the print address
	printf("Value of b: %.2f\tAddress of b: %p\n", b, &b);
	printf("Value of c: %d\t\tAddress of c: %p\n", c, &c);
    printf("Value of d: %d\t\tAddress of d: %p\n", *d, d);  //note the difference in syntax to return the pointer

	return 0;
}
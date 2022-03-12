/* You can declare a function before it is called to prevent compiler errors */

#include <stdio.h>

double average(double a, double b);         //This is a declaration; of the function variables yet to come
                                            //Basically a sneak peak of the type, or the compiler assumes int
                                            //aka FUNCTION PROTOTYPES
int main(void)
{
    double x, y, z;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    printf("Average of %g and %g:\t%g\n", x, y, average(x, y));
    printf("Average of %g and %g:\t%g\n", y, z, average(y, z));
    printf("Average of %g and %g:\t%g\n", x, z, average(x, z));

    return 0;
}

double average(double a, double b)          //This is the function definition
{
    return (a + b) / 2;
}
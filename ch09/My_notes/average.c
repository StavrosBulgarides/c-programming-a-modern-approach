/* Computes averages of pairs of values from a list of three numbers */

#include <stdio.h>

double average(double a, double b)                              //defines a function that we will call below
{
    return (a + b) / 2;
}

int main(void){
    double x, y, z;

    printf("Enter three numbers:\t");
    scanf("%lf %lf %lf", &x, &y, &z);                           //remember double in scanf is %lf

    printf("Average of %g and %g:\t%g\n", x, y, average(x, y)); //and double in printf is %g
    printf("Average of %g and %g:\t%g\n", y, z, average(y, z));
    printf("Average of %g and %g:\t%g\n", x, z, average(x, z));

    return 0;
}
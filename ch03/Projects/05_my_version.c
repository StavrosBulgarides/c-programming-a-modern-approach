#include <stdio.h>

/* Program to produce a square of numbers 1-16 with various sums */

int main(void)
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;

    printf("Enter the numbers 1-16 in any order: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);

    printf("%-3d%-3d%-3d%-3d\n"
            "%-3d%-3d%-3d%-3d\n"
            "%-3d%-3d%-3d%-3d\n"
            "%-3d%-3d%-3d%-3d\n\n", 
            a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p);

    printf("Row sums: %d %d %d %d\n", 
                    (a+b+c+d),
                    (e+f+g+h),
                    (i+j+k+l),
                    (m+n+o+p));

    printf("Column sums: %d %d %d %d\n", 
                    (a+e+i+m),
                    (b+f+j+n),
                    (c+g+k+o),
                    (d+h+l+p));

    printf("Diagonal sums: %d %d\n", 
                    (a+f+k+p),
                    (m+j+g+d));

    return 0;
}
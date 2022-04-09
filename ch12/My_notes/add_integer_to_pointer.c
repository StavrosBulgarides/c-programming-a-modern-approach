#include <stdio.h>

int main(void){
    
    int i;
    int a[] = {1,3,5,7,9,11,13,15,17};
    int *p, *q;

    p = a[2];
    q = p + 3;

    printf("*p = %d\nq = %d", *p, *q);

    return 0;
}
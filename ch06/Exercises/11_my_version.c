#include <stdio.h>

int main(void)
{
    int i;
    int sum = 0;

    for (i = 0; i < 10; i++) {      //Not sure why I get the opposite result from the example..? I get even numbers
        if (i % 2)
            continue;
        sum += i;
        printf("%d\n", i);
    }
    
    return 0;
}
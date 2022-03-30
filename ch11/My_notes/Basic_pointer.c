#include <stdio.h>

int main(void) {

int i, *p = &i;
i = 3;

printf("%d ", *p);

return 0;
}
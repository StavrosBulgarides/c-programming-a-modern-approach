#include <stdio.h>

float amount;

int main(void)
{
    printf("Enter the amount £: ");
    scanf("%f", &amount);
    printf("With tax added: $%.2f", amount * 1.05f);
}

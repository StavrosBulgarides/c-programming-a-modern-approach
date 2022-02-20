#include <stdio.h>

int main()
{
    int amount, twenty, ten, five, one;

    printf("Enter an amount: ");
    scanf("%d", &amount);

    twenty = amount / 20;
    amount -= twenty * 20;
    ten = amount / 10;
    amount -= ten * 10;
    five = amount / 5;
    amount -= five * 5;
    one = amount;

    printf("You'll need to give me:\n");
    printf("%d twenties\n", twenty);
    printf("%d tens\n", ten);
    printf("%d fives\n", five);
    printf("%d ones\n", one);
}
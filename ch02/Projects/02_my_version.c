#include <stdio.h>

float pi= 3.14159;
float radius= 10.0;
float volume;

int main(void)
{
    volume = ((4.0f / 3.0f) * pi * (radius * radius * radius));
    printf("%.2f",volume);
}
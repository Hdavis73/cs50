#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long x = get_int("x: ");
    long y = get_int("y: ");

    float z = x/y;

    printf("%f\n", z);

    // printf("%li\n", x + y);
}
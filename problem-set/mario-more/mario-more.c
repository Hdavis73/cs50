#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while( height < 1);

    for (int i = 0; i < height; i++)
    {
        printf("#");

        for (int j = i; j < height; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}
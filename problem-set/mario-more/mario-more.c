#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while(  );

    for (int i = 0; i < height; i++)
    {
        for (int k = i; k < height; k++)
        {
            printf("#");
        }

        printf("  ");

        for (int j = i; j < height; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}
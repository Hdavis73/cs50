#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

    // for (int i = 0; height < 1)

    do
    {
        height = get_int("Height: ");
    }
    while( 9 < height || height < 1 );

    for (int i = height; i >= 1; i--)
    {
        for (int h = i; h >= 1; h--){
            printf(" ");
        }

        for (int j = i; j <= height; j++){
            printf("#");
        }

        printf("  ");

        for (int j = i; j <= height; j++){

            printf("#");
        }

        printf("\n");
    }
}
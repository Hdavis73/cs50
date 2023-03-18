#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

    //get user input, if input is greater than 8
    do
    {
        height = get_int("height:");
    }
    while(8 < height || height < 1);


    for (int i = height; i >= 1; i--)
    {
        for (int h = i; h >= 1; h--){
            printf(".");
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
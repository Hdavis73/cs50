#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num;
    do
    {
        num = get_int("Size:");
    }
    while( num < 1);



    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < num; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}
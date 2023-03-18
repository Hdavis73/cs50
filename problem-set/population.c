#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int starting_size;

    do
    {
            starting_size = get_int("Starting Size: ");
    }
    while(starting_size < 9);



    // TODO: Prompt for end size

    int end_size;
    do
    {
    end_size = get_int("End Size: ");
    }
    while(end_size < starting_size);



    // TODO: Calculate number of years until we reach threshold

    int i;

    int total_llamas = starting_size;

    for( i = 0; total_llamas < end_size; i++)
    {
        int new_llamas = starting_size / 3;
        int dead_llamas = starting_size / 4;

        total_llamas = total_llamas + (float) new_llamas - (float) dead_llamas;
    }

    // do
    // {
    //     int new_llamas = starting_size / 3;
    //     int dead_llamas = starting_size / 4;

    //     total_llamas = total_llamas + new_llamas - dead_llamas;

    //     years_to_end++;
    // }
    // while(total_llamas < end_size);




    // TODO: Print number of years

    printf("%i\n", i);
}

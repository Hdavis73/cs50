#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size

    int starting_size = get_int("Starting Size: ");

    // TODO: Prompt for end size

    int end_size = get_int("End Size: ");

    // TODO: Calculate number of years until we reach threshold

if(starting_size > 9 && starting_size < end_size)
{
    int total_llamas = starting_size;
    int years_to_end = 0;

    do
    {
        int new_llamas = starting_size / 3;
        int dead_llamas = starting_size / 4;

        int total_llamas = total_llamas + new_llamas - dead_llamas;

        int years_to_end += 1;
    }
    while(total_llamas < end_size)

}



    // TODO: Print number of years

    printf("%i\n", years_to_size);
}

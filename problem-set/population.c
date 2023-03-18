#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size

    int starting_size = get_int("Starting Size: ");

    // TODO: Prompt for end size

    int end_size = get_int("End Size: ");

    // TODO: Calculate number of years until we reach threshold

if(starting_size < 9 || starting_size > end_size)
{
    printf("try agrain\n");
}



    // TODO: Print number of years

    printf("%i\n", years_to_size);
}

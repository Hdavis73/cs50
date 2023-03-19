#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

    //get user input, if input is greater than 8 or less than 1 reprompt
    do
    {
        height = get_int("height:");
    }
    while (8 < height || height < 1);

    //for every number in the value height starting with the last number
    for (int i = height; i > 0; i--)
    {
        //print a the same number of spaces as i (i = 5  print 5 spaces) because i starts with zero the first row is skipped (which is actually the highest number because i starts backwards), this is to push everything to be centered
        for (int h = i; h > 1; h--)
        {
            printf(" ");
        }

        //print the same amount of hashes as i is on, i does still start with 0 but because 0 is less than height, according to this loop it still prints one hash
        for (int j = i; j <= height; j++)
        {
            printf("#");
        }

        //print two spaces, this coming after the first set of hashes to create a middle space
        printf("  ");

        //this is just a replica of the first j loop put in to mirror the same number of hashes on both sides, no spaces come before this set as they are not necissary for alignment
        for (int j = i; j <= height; j++)
        {

            printf("#");
        }

        //this stops the current row, ensuring that the next time the loop runs it will be on its own line
        printf("\n");
    }
}
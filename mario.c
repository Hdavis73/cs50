#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num = get_size()
    print_grid(num)

}

int get_size(void)
{
   do
   {
    num = get_int("Size:");
   }
   while(num < 1)

   return num
}

int get_grid(num)
{
    for(let i = 0; i < num; i++)
    {
        for(let j = 0; j < num; j++)
        {
            printf("#");
        }
    }
}
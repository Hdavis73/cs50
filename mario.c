#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num = get_size()
    print_grid(num)

}

int get_size(void)
{
    int num;
   do
   {
    num = get_int("Size:");
   }
   while(num < 1)

   return num
}

void print_grid(int num)
{
    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < num; j++)
        {
            printf("#");
        }
        printf("/n");
    }
}
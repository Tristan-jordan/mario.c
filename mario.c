#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int size;
    do
    size = get_int("Size (Must be between 1 & 8): ");             // prompts user for input
    while (size < 1 || size > 8);                               // boolean conditionals to keep size between 1 and 8
    
    for (int i = 0; i < size; i++)
    {
        int    nos = (size - i);                                // nos - number of spaces
        int    noh = (1 + i);                                   // noh - number of hashtags
            for (int j = 0; j < nos; j++)                       // for loop to print spaces
            {
            printf(" ");
            }
                for (int k = 0; k < noh; k++)                   //for loop to print hashtags
                {
                    printf("#");
                }
                    printf(" ");                                // puts a space inbetween the pyramid - already a part of the original for loop, so it creates a column of spaces
                    for (int z = 0; z < noh; z++)               // for loop to print hashtags after the space
                    {
                        printf("#");
                    }
                printf("\n");
    }
}

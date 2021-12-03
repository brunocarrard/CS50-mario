#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // declaring variables
    int n;
    char block = '#';

    // getting pyramid height
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    //building pyramid
    for (int i = 0; i < n; i++)
    {

        // loop to build spaces
        for (int s = n - 1; s > i; s--)
        {
            printf(" ");
        }

        // loop for building blocks
        for (int k = 0; k <= i; k++)
        {
            printf("%c", block);
        }

        //adding spaces between the pyramid
        printf("  ");

        //loop for building blocks
        for (int k = 0; k <= i; k++)
        {
            printf("%c", block);
        }

        // breaking the line
        printf("\n");
    }
}
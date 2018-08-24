#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    while (true)
    {
        // Prompt For Height
        height = get_int("Height: ");
        // Check If The Number Is Non-negative And Less Than 24
        if (height >= 0 && height <= 23)
        {
            break;
        }
    }

    for (int j = 2; j <= height + 1; j++)
    {
        for (int i = height + 1; i >= 1; i--)
        {
            if (i <= j)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}
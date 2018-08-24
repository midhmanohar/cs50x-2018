#include <cs50.h>
#include <stdio.h>
#include <math.h>
int main(void)
{
    float change;

    while (true)
    {
        change = get_float("Change owed: ");
        if (change>0)
        {
            break;
        }
    }

    change = roundf(change* 100);
    change = ceilf(change);
    int count = 0;
    while (change >= 1)
    {
        if (change/25 > 0)
        {
            count += change/25;
            change = (int)change%25;
        }
        if (change/10 > 0)
        {
            count += change/10;
            change = (int)change%10;
        }
        if (change/5 > 0)
        {
            count += change/5;
            change = (int)change%5;
        }
        if (change/1 > 0)
        {
            count += change/1;
            change = (int)change%1;
        }
    }
    printf("%i\n",count);
}
#include <cs50.h>
#include <stdio.h>

int addInt(int a,int b);

int main(void)
{
    printf("Give me an integer:\n");

    int x=get_int();
    printf("Give me another integer:\n");
    int y=get_int();

    int z=addInt(x,y);

    printf("sum of %i and %i is %i\n",x,y,z);
}

int addInt(int a,int b)
{
    int sum=a+b;
    return sum;
}
#include <cs50.h>
#include <stdio.h>

bool valid_triangle(float x,float y,float z);

int main(void)
{
    printf("1st side:\n");
    float x=get_int();
    printf("2nd side:\n");
    float y=get_int();
    printf("3rd side:\n");
    float z=get_int();

    valid_triangle(x,y,z);
}

bool valid_triangle(float x,float y,float z)
{
    if(x<=0 || y<=0 || z<=0)
    {
        return false;
    }

    if(x+y<=z || x+z<=y || y+z<=x)
    {
        return false;
    }

    return true;
}
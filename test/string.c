#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // string s = get_string("Name: ");
    // printf("hello %s \n",s);

    int c = ((('Z'-'A')+2)%26)+'A';

    printf("%c",c);

}
#include <cs50.h>
#include <stdio.h>
#include <string.h>

string book[] = {
    "chen",
    "kernighan",
    "Leitner",
    "Lewis",
    "Malan",
    "Muller",
    "Seltzer",
    "smith"
};

int main(void)
{
    string name = get_string("Name: ");

    // search for name

    for(int i=0;i< sizeof(book)/sizeof(string);i++)
    {
      if(strcmp(name,book[i])==0)
      {
            printf("Calling %s\n",name);
            return 0;
      }
    }
    printf("Quitting\n");
}
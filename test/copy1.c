#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s = get_string("s: ");

    if(!s)
    {
        return 1;
    }

    //allocating memory

    char *t = malloc((strlen(s)+1)*sizeof(char));

    if(!s)
    {
        return 1;
    }

    for(int i=0, n=strlen(s);i<n;i++)
    {
        t[i]=s[i];
    }

    if(strlen(t)>0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s : %s\n",s);
    printf("t : %s\n",t);

    // free memory
    free(t);
    return 0;

}
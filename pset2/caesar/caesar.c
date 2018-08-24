#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc,string argv[])
{
    if(argc!=2)
    {
        printf("Usage: ./caesar k\n");
        exit(1);
    }

    //string k=argv[1];

    int k = atoi(argv[1]);


    string p = get_string("plaintext: ");

    printf("ciphertext: ");

    for(int i=0,n=strlen(p);i<n;i++)
    {
        if(isalpha(p[i]))
        {
           if(isupper(p[i]))
           {
               printf("%c",(((p[i]-'A')+k)%26)+'A');
           }

           if(islower(p[i]))
           {
               printf("%c",(((p[i]-'a')+k)%26)+'a');
           }
        }

        else
        {
            printf("%c",p[i]);
        }

    }
    printf("\n");


}

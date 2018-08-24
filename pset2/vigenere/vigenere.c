#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc,string argv[])
{
    if(argc!=2)
    {
        printf("Usage: ./vigenere k\n");
        exit(1);
    }

    string k = argv[1];
    for(int i=0,n=strlen(k);i<n;i++)
    {
        if(isalpha(k[i]))
        {
            continue;
        }
        else
        {
            printf("Usage: ./vigenere k\n");
            exit(1);
        }
    }
    int l= strlen(k);
    string p = get_string("plaintext: ");

    printf("ciphertext: ");
    int j=0;
    for(int i=0,n=strlen(p);i<n;i++)
    {
        int key;



        if(isalpha(p[i]))
        {

            if(isalpha(k[j%l]))
            {
                if(isupper(k[j%l]))
                {
                    key=k[j%l]-'A';
                }
                if(islower(k[j%l]))
                {
                    key=k[j%l]-'a';
                }
            }

            else
            {
            printf("%c",p[i]);
            continue;
            }

            if(isupper(p[i]))
            {

               printf("%c",(((p[i]-'A')+key)%26)+'A');
               j++;
            }

            if(islower(p[i]))
            {

                printf("%c",(((p[i]-'a')+key)%26)+'a');
                j++;
            }
        }


        else
        {
            printf("%c",p[i]);
        }

    }
    printf("\n");


}

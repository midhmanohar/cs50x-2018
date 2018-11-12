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
    int i,j,k;
   for(i=1;i<=height;i++){
       for(j=height;j>=1;j--){
           if(j<=i){
               printf("#");
           }
           else{
               printf(" ");
           }
       }
       printf("  ");
       for(k=0;k<i;k++){
           printf("#");
       }
       printf("\n");
   }

}
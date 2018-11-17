#include <cs50.h>
#include <stdio.h>

int main(void){
    long long ccnumber;
    ccnumber = get_long_long("Number: ");
    int digit1=0,digit2=0,num_digits=1,sum=0;
    while(ccnumber>0){
        digit2 = digit1;
        digit1 = ccnumber%10;

        if (num_digits % 2 ==0){
            int multiply = digit1*2;
            sum += (multiply/10)+(multiply%10);
        }else{
            sum+=digit1;
        }
        ccnumber/=10;
        num_digits++;
    }
    num_digits--;
    if(sum%10 != 0){
        printf("INVALID\n");
    }
    int lastTwo = (digit1*10)+digit2;

    switch(num_digits){
        case 13:if(digit1==4){
            printf("VISA\n");
            }else{
                printf("INVALID\n");
            }
        break;
        case 16:if(digit1==4){
            printf("VISA\n");
        }
        else if(lastTwo>=51 && lastTwo <=55){
            printf("MASTERCARD\n");
        }
        else{
            printf("INVALID\n");
        }
        break;
        case 15: if(lastTwo == 34 || lastTwo == 37){
        printf("AMEX\n");
        }else{
            printf("INVALID\n");
        }
        break;
        default:printf("INVALID\n");

    }
}
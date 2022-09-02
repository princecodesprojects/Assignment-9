#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,amount=0,total=0;
    printf("Enter your electricity bill\n");
    scanf("%d",&n);

    switch(n<=50)
    {
        case 1:amount=n*0.5;
               break;
        case 0:switch(n<=150)
        {
            case 1:amount=25+(n-50)*0.75;
            break;
            case 0:switch(n<=250)
            {
               case 1:amount=100+(n-150)*1.20;
               break;
               case 0:amount=220+(n-250)*1.50;
               break;
            }
            break;
        }
        break;

        default:printf("Enter a valid unit\n");
        break;
    }
    total=amount+amount*0.20;
    printf("Total amount =%d",total);
    return 0;
}
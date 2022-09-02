#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter a year\n");
    scanf("%d",&n);

    switch(n%100==0)
    {
        case 1:switch(n%400==0)
               {
                  case 1:printf("Leap year\n");
                  break;
                  case 0:printf("Not leap year\n");
                  break;
               }
               break;
        case 0:switch(n%4==0)
        {
            case 1:printf("Leap year\n");
            break;
            case 0:printf("Not leap year\n");
            break;
        }
    }
    return 0;
}
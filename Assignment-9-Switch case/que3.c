#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter a number of week\n");
    scanf("%d",&n);

    switch(n)
    {
        case 1:
            printf("This is monday\n");
            break;
            case 2:
            printf("This is Tuesday\n");
            break;

            case 3:
            printf("This is wednesday\n");
            break;

            case 4:
            printf("This is Thursday\n");
            break;

            case 5:
            printf("This is Friday\n");
            break;

            case 6:
            printf("This is Saturday\n");
            break;

            case 7:
            printf("This is sunday\n");
            break;

            default:
            printf("Enter a valid choice\n");
            break;
    }
}
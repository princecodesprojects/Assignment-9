#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int var;
    printf("Enter a number\n");
    scanf("%d",&var);

    switch(var)
    {
        case 1:
        printf("good");
        break;
        case 2:
        printf("better");
        break;
        case 3:
        printf("best");
        break;

        default:printf("invalid\n");
        break;
    }

    return 0;
}
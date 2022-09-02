#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);

    switch(n%2==0)
    {
        case 1:printf("%d",n+1);
        break;
        case 0:
        printf("Number is not even");
        break;
    }
    return 0;
}
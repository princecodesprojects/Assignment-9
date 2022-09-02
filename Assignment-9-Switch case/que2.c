#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    while(1)
    {
        
       printf("Enter your choice\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Exit\n");
    scanf("%d",&n);
    switch(n)
    {
             case 1:
             printf("Enter two numbers\n");
             int a,b;
             scanf("%d%d",&a,&b);
             printf("Sum of %d and %d is %d\n",a,b,a+b);
             break;

             case 3:
             printf("Enter two numbers\n");
             int c,d;
             scanf("%d%d",&c,&d);
             printf("Multiplication of %d and %d is %d\n",c,d,c*d);
             break;

             case 2:
             printf("Enter two numbers\n");
             int e,f;
             scanf("%d%d",&e,&f);
             printf("Subtraction of %d and %d is %d\n",e,f,e-f);
             break;

             case 4:
             printf("Enter two numbers\n");
             int g,h;
             scanf("%d%d",&g,&h);
             printf("Division of %d and %d is %f\n",g,h,g/h);
             break;

             case 5:
                  exit(0);

                  default:printf("Enter a valid choice\n");
                  break;
    }
    }
   
    return 0;
}

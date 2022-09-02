#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    while(1)
    {
        
       printf("Enter your choice\n");
    printf("1.Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
    printf("2.Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
    printf("3.Check whether a given set of three numbers are equilateral triangle or not\n");
    printf("4.Exit\n");
    scanf("%d",&n);
    switch(n)
    {
             case 1:
             printf("Enter Lenghts\n");
             int a,b,c;
             scanf("%d%d%d",&a,&b,&c);
             if(a==b)
             printf("Traigle is isosceles\n");
             else
             printf("Traigle is not isosceles\n");
             break;

             case 2:
             printf("Enter angles of trangle\n");
             int d,e,f;
             scanf("%d%d%d",&d,&e,&f);
             if(d==90||e==90||f==90)
             printf("Traingle is right angle triangle\n");
             else
             printf("Traingle is not right angle triangle\n");
             break;

             case 3:
             printf("Enter lenght\n");
             int g,h,i;
             scanf("%d%d%d",&g,&h,&i);
             if(g==h && g==i)
             printf("Trangle is equilateral triangle\n");
             else
             printf("Trangle is not equilateral triangle\n");
             break;

             case 4:
                  exit(0);

                  default:printf("Enter a valid choice\n");
                  break;
    }
    }
   
    return 0;
}

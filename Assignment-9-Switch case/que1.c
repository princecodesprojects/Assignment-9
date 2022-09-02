#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter month number\n");
    scanf("%d",&n);

    switch(n)
    {
              case 1:
              printf("There are 31 days in january month\n");
              break;

              case 2:
              printf("There are 28 days in Fabruary month\n");
              break;

              case 3:
              printf("There are 31 days in March month\n");
              break;

              case 4:
              printf("There are 30 days in April month\n");
              break;

              case 5:
              printf("There are 31 days in May month\n");
              break;

              case 6:
              printf("There are 30 days in June month\n");
              break;

              case 7:
              printf("There are 31 days in July month\n");
              break;

              case 8:
              printf("There are 31 days in August month\n");
              break;

              case 9:
              printf("There are 30 days in September month\n");
              break;

              case 10:
              printf("There are 31 days in October month\n");
              break;

              case 11:
              printf("There are 30 days in November month\n");
              break;

              case 12:
              printf("There are 31 days in December month\n");
              break;

              default:
                    printf("Enter a valid month\n");
                    break;
            

    }

}
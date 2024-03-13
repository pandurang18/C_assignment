#include <stdio.h>
int main()
{
int a;
printf("Enter year\n");
scanf("%d",&a);
if(a%400==0)
{
   printf("It is a leap year");
   if(a%4==0)
           { 
          if(a%100!=0)
                {   
            printf("It is a leap year\n");
                }
           }        
}
else
{
printf("It is not leap year\n");
}
return 0;
}

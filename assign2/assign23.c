#include <stdio.h>
int main()
{
int a;
printf("Enter a number\n");
scanf("%d",&a);
if(a>0)
{
printf("The number is positive\n");
}
else if(a<0)
{
printf("The number is negative\n");
}
else if (a==0)
{
printf("The number is 0");
}
return 0;
}

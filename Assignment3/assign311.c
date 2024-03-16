#include <stdio.h>
int main()
{
int num;
int fact=1;
printf("Enter a number\n");
scanf("%d",&num);
for(int i=1;i<=num;i++)
{
fact=fact*i;
printf("%d *",i);
}
 printf("\b=` Factorial of a number ia %d\n",fact);




return 0;
}

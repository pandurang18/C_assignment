#include <stdio.h>
int main()
{
int num;
printf("Please enter a number\n");
scanf("%d",&num);
int fact=1;
int i=1;
while(i<=num)
{
printf("%d *",i);
fact=fact*i;
i++;
}
printf("\b= %d",fact);


return 0;
}

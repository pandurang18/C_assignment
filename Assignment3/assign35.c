#include <stdio.h>
int main()
{
int num;
printf("Please enter a number\n");
scanf("%d",&num);
int fact=1;

while(num!=0)
{
printf("%d *",num);
fact=fact*num;
num--;
}
printf("\b= %d",fact);


return 0;
}

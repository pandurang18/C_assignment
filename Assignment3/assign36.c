#include<stdio.h>
int main()
{
int num,i=1;
printf("Please enter a number\n");
scanf("%d",&num);
printf("Total factors are:%d",i);
while( i!=num)
{
if(num%i==0)
printf("%d,",i);
i++;


}
return 0;
}


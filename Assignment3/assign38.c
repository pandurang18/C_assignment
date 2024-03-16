#include<stdio.h>
int main()
{
int num1,num2,rem=1;
printf("Enter a numbers\n");
scanf("%d %d",&num1,&num2);
while(rem!=0)

{
rem=num1%num2;
printf("%d %% %d= %d\n",num1,num2,rem);
num1=num2;
num2=rem;

//printf("GDC is %d",num2);
}
printf(" gcd = %d",num1);



return 0;
}

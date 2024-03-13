#include <stdio.h>
int num,temp,rem,res=0;
int main()

{
printf("Enter five digit number\n");
scanf("%d",&num);

  temp=num;
  rem=temp%10;
  res=res*10 + rem;
  temp=temp/10;

  rem=temp%10;
  res=res*10 + rem;
  temp=temp/10;

  rem=temp%10;
  res=res*10 + rem;
  temp=temp/10;
  
  rem=temp%10;
  res=res*10 + rem;
  temp=temp/10;
  
  rem=temp%10;
  res=res*10 + rem;
  temp=temp/10;

  if(num == res)
  {
   printf("it is pellindrome\n");
  }
  else
  {
   printf("It is not pellindrome");
  }
  }

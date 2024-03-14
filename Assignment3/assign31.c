#include<stdio.h>
int main()
{
int num;
char ch;
printf("Enter a number");
scanf("%d",&num);
printf("Enter a character\n");
scanf("%c",&ch);
int i=0;
while(i!=num)
{
printf("*");
i++;
}
return 0;
}

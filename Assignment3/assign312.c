#include<stdio.h>
int main()
{
int index,base;
printf("Enter a base value\n");
scanf("%d",&base);

printf("Enter a index value\n");
scanf("%d",&index);
int ans=1;
for(int i=1;i<=index;i++)
{
ans=ans*base;
}
printf("value is %d",ans);


return 0;
}

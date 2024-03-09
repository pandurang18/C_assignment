#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter three numbers for Comparision\n");
scanf("%d%d%d",&a,&b,&c);
if (a>b)
{
    if(a>c)
     {
	 printf("%d is Maximun",a);
     }
     else 
	 {printf("%d is MJaximum",c);
	 }
}
else 
{
printf("%d is maximum",b);
}
return 0;
}

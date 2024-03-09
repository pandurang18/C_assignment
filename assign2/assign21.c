#include <stdio.h>
int main()
{
float a,b,div;
printf("Enter two numbers for division\n");
scanf("%f%f",&a,&b);

if (b!=0)
{

div =a/b;
printf("Division is %f\n",div);
}
else
{
printf("Cant divide by 0\n");
}
return 0;
}

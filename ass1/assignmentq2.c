#include <stdio.h>
int main()
{
int a;
printf("Enter a number\n");
scanf("%d",&a);
printf("Decimal number is%d\n",a);
printf("Octal number is %o\n",a);
printf("Hex value is %x\n",a);

if((a>=65 && a<=90)||(a>=97 && a<=122))
{
printf("number is character %c\n",a);
}
else
{
printf("number is not character\n");
}

return 0;

}

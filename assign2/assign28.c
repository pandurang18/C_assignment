#include <stdio.h>

int quan,disc,pri,final;
int main()
{
printf("please enter quantity\n");
scanf("%d",&quan);
if(quan<=30)
{
final=quan*5;
printf("The final quantity is %d",final);
}
else if(quan>=30 && quan <=50)
{
final=(quan*5*0.9);
printf("The final quantity price is %d",final);
}
else if(quan>=50)

{
final=(quan*5*0.85);
printf("The final quantity price is %d",final);
}
return 0;
}

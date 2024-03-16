#include<stdio.h>
int main()
{
	int num;
	int num1=0,num2=1,num3;
	printf("Enter a number\n");
	scanf("%d",&num);
	printf("%d, %d,",num1,num2);

	for(int i=0;i<=num;i++)
	{

		num3=num1+num2;
		num1=num2;
		num2=num3;

		printf(" %d ,",num3);
	}
	printf("\b \n");
	return 0;
}


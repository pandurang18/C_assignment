#include<stdio.h>
int main()
{
	
	for (int i=1;i<=5;i++)
	{

		for(int j=1;j<=i;j++)


			printf("%c",'*');
		printf("\n");

	}
printf("-----------------------------------------\n");



int j;	
	for (int i=5;i>=1;i--)
	{

		for(int j=1;j<=i;j++)


			printf("%c",'*');
		printf("\n");

	}




	return 0;
}

#include<stdio.h>
int main()
{
	int i,j,m,num,num1;

	printf("Enter range\n");
	scanf("%d %d",&num,&num1);
	for (i=num;i<=num1;i++)
	{
		for(j=1;j<=10;j++)

		{
			m=j*i;
			printf("%d*%d=%d\n",i,j,m);



		}
		printf("\n");
	}

	return 0;
}

#include<stdio.h>
int main()
{
	int i,j,m;

	for (i=1;i<=10;i++)
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

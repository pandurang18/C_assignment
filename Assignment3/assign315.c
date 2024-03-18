#include<stdio.h>
int main()
{
	int num1,num2,res;
	char op;

	do
	{


		printf("Enter two numbers\n");
		scanf("%d %d",&num1,&num2);
		printf("Enter operator\n");
		scanf("%*c%c",&op);




		switch (op)
		{
			case '+':
				res=num1+num2;
				printf("Ans is %d\n",res);
				break;

			case '-':
				res=num1-num2;
				printf("Ans is %d\n",res);
				break;

			case '*':
				res=num1*num2;
				printf("Ans is %d\n",res);
				break;

			case '/':
				res=num1/num2;
				printf("Ans is %f\n",res);
				break;

			case '0':
				{

				}
				break;
			default:
				printf("invalid oprator\n");
		}
		printf("Do you want to continue...Enter 1 or 0 for exit\n");
		scanf("%*c%c",&op);
	}
	while(op!='0');





	return 0;
}

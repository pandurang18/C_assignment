#include<stdio.h>
int main()
{
    int op;
	float num1,num2,Add,Sub,Div,Mul;
	printf("Please enter numbers\n");
	scanf("%f%f",&num1,&num2);
	
	printf("1.Add\n2.Sub\n3.Div\n4.Mul\n");
	printf("Please enter operation\n");
	scanf("%d",&op);
		switch(op)
		{
			case 1:
				{
				Add=num1+num2;
				printf("Addition is %f",Add);
				}
				break;
			case 2:
			{	Sub=num1-num2;

				
				printf("Substraction  is %f",Sub);
				}
				break;
			case 3:
				{
				Div=num1/num2;

				printf("Division is %f",Div);
				}
				break;
			case 4:
				{
				Mul=num1*num2;

				printf("Multiplication is %f",Mul);
				}
		}
	return 0;
}


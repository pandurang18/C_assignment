#include <stdio.h>
int main()
{
	int year,month;

	printf("Please enter year\n");
	scanf("%d",&year);
	printf("Please enter month\n");
	scanf("%d",&month);

	switch(month)
	{
		case 1:
			printf("January has 31 days\n");
			break;
		case 2:
			if((year%400==0 || year%4==0)||(year%100!=0))
				printf("Febuary has 29 Days\n");
			else
				printf("Febuary has 28 Days\n");
			break;
		case 3:
			printf("March has 31 days\n");
			break;

		case 4:
			printf("April has 30 days\n");
			break;
		case 5:
			printf("May has 31 days\n");

			break;
		case 6:
			printf("June has 30 days\n");

			break;
		case 7:
			printf("July has 31 days\n");

			break;
		case 8:
			printf("August has 30 days\n");
			break;

		case 9:
			printf("September has 30 days\n");
			break;

		case 10:
			printf("October has 31 days\n");
			break;
		case 11:
			printf("November has 30 days\n");

			break;
		case 12:
			printf("December has 31 days\n");
	}



	return 0;
}

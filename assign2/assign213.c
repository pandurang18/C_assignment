#include <stdio.h>
int main()
{
	int deg;
	printf("Please enter degree\n");
    scanf("%d",&deg);

if(deg==0)
		printf("%d is on Positive X axis",deg);
	else if(deg>0 && deg <90)
		printf("%d is in First Quadrant",deg);

	else if(deg==90)
		printf("%d is on Positive Y axis",deg);

	else if(deg>90 && deg <180)
		printf("%d is in second Quadrant",deg);

	else if(deg==180)
		printf("%d is on Negative X axis",deg);

	else if(deg>180 && deg<270)
		printf("%d is in First Quadrant",deg);

	else if(deg==270)
		printf("%d is on Negative Y axis",deg);

	else if(deg>270 && deg <360)
		printf("%d is in First Quadrant",deg);

	else if(deg==360)
        printf("%d is on Positive X axis",deg);

		return 0;
}


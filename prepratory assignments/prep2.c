#include <stdio.h>

unsigned long factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int number;

    printf("Enter any whole number: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Number should be whole number\n");
    }
    else
    {
        unsigned long result = factorial(number);
        printf("Factorial of %d = %lu\n", number, result);
    }

    return 0;
}

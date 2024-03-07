#include <stdio.h>

// Function to calculate and print Fibonacci series up to n numbers
void fibonacci(int n)
{
    int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d numbers: ", n);

    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            next = i;
        }
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    printf("\n");
}

int main()
{
    int n;

    // Input from the user
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);

    // Check if the input is non-negative
    if (n < 0)
    {
        printf("Please enter a non-negative number.\n");
    }
    else
    {
        // Calculate and print Fibonacci series
        fibonacci(n);
    }

    return 0;
}

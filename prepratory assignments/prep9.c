#include <stdio.h>


void decimalToBinary(int n)
{
    if (n > 1)
    {
        decimalToBinary(n / 2);
    }
    printf("%d", n % 2);
}


void decimalToOctal(int n)
{
    if (n > 0)
    {
        decimalToOctal(n / 8);
        printf("%d", n % 8);
    }
}


void decimalToHexadecimal(int n)
{
    if (n > 0)
    {
        decimalToHexadecimal(n / 16);
        int remainder = n % 16;
        if (remainder < 10)
        {
            printf("%d", remainder);
        }
        else
        {
            printf("%c", 'A' + remainder - 10);
        }
    }
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Binary equivalent: ");
    decimalToBinary(number);
    printf("\n");

    printf("Octal equivalent: ");
    decimalToOctal(number);
    printf("\n");

    printf("Hexadecimal equivalent: ");
    decimalToHexadecimal(number);
    printf("\n");

    return 0;
}

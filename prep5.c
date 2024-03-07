#include <stdio.h>

int main()
{
    char inputChar;
    int uppercaseCount = 0, lowercaseCount = 0, digitCount = 0, otherCount = 0;

    printf("Enter a string of characters (press Enter to finish):\n");


    while ((inputChar = getchar()) != '\n')
    {
        if (inputChar >= 'A' && inputChar <= 'Z')
        {
            uppercaseCount++;
        }
        else if (inputChar >= 'a' && inputChar <= 'z')
        {
            lowercaseCount++;
        }
        else if (inputChar >= '0' && inputChar <= '9')
        {
            digitCount++;
        }
        else
        {
            otherCount++;
        }
    }

    printf("Uppercase Letters: %d\n", uppercaseCount);
    printf("Lowercase Letters: %d\n", lowercaseCount);
    printf("Digits: %d\n", digitCount);
    printf("Other Characters: %d\n", otherCount);

    return 0;
}

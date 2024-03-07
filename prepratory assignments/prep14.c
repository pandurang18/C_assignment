#include <stdio.h>
#include <string.h>


int isPalindrome(const char *str)
{
    int length = strlen(str);

    int start = 0;
    int end = length - 1;

    while (start < end)
    {

        if (str[start] != str[end])
        {
            return 0;
        }
        start++;
        end--;
    }

    return 1;
}

int main()
{
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    if (isPalindrome(inputString))
    {
        printf("%s is a palindrome.\n", inputString);
    }
    else
    {
        printf("%s is not a palindrome.\n", inputString);
    }
    return 0;
}

#include <stdio.h>
#include <ctype.h>

#define ALPHABET_SIZE 26

int main()
{
    char inputString[100];

    // Input from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Initialize an array to store the count of each alphabet
    int alphabetCount[ALPHABET_SIZE] = {0};

    // Count occurrences of each alphabet in the string
    for (int i = 0; inputString[i] != '\0'; i++)
    {
        if (isalpha(inputString[i]))
        {
            int index = tolower(inputString[i]) - 'a';
            alphabetCount[index]++;
        }
    }

    // Display the results
    printf("\nOutput:\n");
    for (int i = 0; i < ALPHABET_SIZE; i++)
    {
        if (alphabetCount[i] > 0)
        {
            printf("%c : %d\n", 'A' + i, alphabetCount[i]);
        }
    }

    return 0;
}

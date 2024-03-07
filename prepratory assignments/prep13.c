#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 5
#define MAX_LENGTH 50

int main()
{
    char *arrayOfStrings[MAX_STRINGS] = {"dac", "dmc", "desd", "dbda", "dac"};

    printf("Array of Strings:\n");
    for (int i = 0; i < MAX_STRINGS; i++)
    {
        printf("%s\n", arrayOfStrings[i]);
    }

    printf("\nDuplicated Strings:\n");

    for (int i = 0; i < MAX_STRINGS - 1; i++)
    {
        for (int j = i + 1; j < MAX_STRINGS; j++)
        {
            if (strcmp(arrayOfStrings[i], arrayOfStrings[j]) == 0)
            {
                printf("%s\n", arrayOfStrings[i]);
                break;
            }
        }
    }

    return 0;
}

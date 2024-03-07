#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 10
#define MAX_NAME_LENGTH 50


int compareStrings(const void *a, const void *b)
{
    return strcmp(*(const char **)a, *(const char **)b);
}

int main()
{
    char nameOfStudents[MAX_STUDENTS][MAX_NAME_LENGTH];
    int numStudents;

   
    printf("Enter the number of students (up to %d): ", MAX_STUDENTS);
    scanf("%d", &numStudents);

    if (numStudents > MAX_STUDENTS)
    {
        printf("Number of students exceeds the limit. Exiting.\n");
        return 1; 
    }

    printf("Enter the names of students:\n");
    for (int i = 0; i < numStudents; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%s", nameOfStudents[i]);
    }

    qsort(nameOfStudents, numStudents, sizeof(nameOfStudents[0]), compareStrings);

    printf("\nSorted Names of Students:\n");
    for (int i = 0; i < numStudents; i++)
    {
        printf("%s\n", nameOfStudents[i]);
    }

    return 0;
}

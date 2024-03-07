#include <stdio.h>

int main()
{
    int marks[5];
    int totalMarks = 0;

    printf("Enter marks for five subjects:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        if (marks[i] < 0 || marks[i] > 100)
        {
            printf("Invalid marks! Marks should be between 0 and 100.\n");
            return 1; 
        }

        totalMarks += marks[i];
    }

    
    float averageMarks = (float)totalMarks / 5;

    
    char grade;
    if (averageMarks >= 90)
    {
        grade = 'E';
    }
    else if (averageMarks >= 80)
    {
        grade = 'A';
    }
    else if (averageMarks >= 70)
    {
        grade = 'B';
    }
    else if (averageMarks >= 60)
    {
        grade = 'C';
    }
    else
    {
        grade = 'F';
    }

   
    printf("Total Marks: %d\n", totalMarks);
    printf("Average Marks: %.2f\n", averageMarks);
    printf("Grade: %c\n", grade);

    return 0;
}

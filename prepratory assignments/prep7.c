#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int number = atoi(argv[1]);

    printf("Multiplication Table for %d:\n", number);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}

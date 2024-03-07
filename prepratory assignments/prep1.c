#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n = argc - 1;
    int max = atoi(argv[1]);

    for (int i = 2; i <= n; i++)
    {
        int currentNum = atoi(argv[i]);
        if (currentNum > max)
        {
            max = currentNum;
        }
    }

    printf("Maximum: %d\n", max);

    return 0;
}

#include <stdio.h>

void main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || j == 3 || (i == 5 && j <= 3))
                printf("J ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

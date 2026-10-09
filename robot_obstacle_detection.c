
#include <stdio.h>

void main()
{
    int i, distance;

    for (i = 1; i <= 5; i++)
    {
        printf("\nEnter distance reading %d: ", i);
        scanf("%d", &distance);

        if (distance <= 10)
            printf("Obstacle detected!");
        else
            printf("Path is clear.");
    }
}

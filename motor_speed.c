
#include <stdio.h>

void main()
{
    int speed;

    printf("Enter Motor Speed in RPM: ");
    scanf("%d", &speed);

    if (speed >= 500 && speed <= 2000)
    {
        printf("Motor Speed is Normal");
    }
    else
    {
        printf("Motor Speed is Outside Range");
    }
}

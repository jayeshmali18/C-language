
#include <stdio.h>

void main()
{
    float speed, time, distance;

    printf("Enter speed of robot (m/s): ");
    scanf("%f", &speed);

    printf("Enter time (seconds): ");
    scanf("%f", &time);

    distance = speed * time;

    printf("Distance travelled = %.2f meters", distance);
}

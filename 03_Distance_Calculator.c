#include <stdio.h>

void main()
{
    float speed, time, distance;

    printf("Enter Speed in km/h: ");
    scanf("%f", &speed);

    printf("Enter Time in hours: ");
    scanf("%f", &time);

    distance = speed * time;

    printf("Distance = %.2f km", distance);
}

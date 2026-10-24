#include <stdio.h>

void main()
{
    int sensor;

    sensor = 75;

    printf("Sensor Value = %d\n", sensor);

    if(sensor >= 50)
    {
        printf("Sensor Status: ACTIVE");
    }
    else
    {
        printf("Sensor Status: INACTIVE");
    }
}

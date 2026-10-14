#include <stdio.h>

float average(int a[], int n)
{
    int i, sum = 0;

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    return (float)sum / n;
}

void main()
{
    int sensor[5] = {20, 30, 40, 50, 60};

    printf("Average Sensor Reading = %.2f",
           average(sensor, 5));
}

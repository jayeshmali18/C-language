#include <stdio.h>

void main()
{
    int sensor1, sensor2, sum;

    clrscr();

    printf("Enter reading from sensor 1: ");
    scanf("%d", &sensor1);

    printf("Enter reading from sensor 2: ");
    scanf("%d", &sensor2);

    sum = sensor1 + sensor2;

    printf("Sum of sensor readings = %d", sum);

    getch();
}

#include <stdio.h>

void main()
{
    int sensor1, sensor2, sensor3;
    int sum, difference;

    clrscr();

    printf("Enter reading from sensor 1: ");
    scanf("%d", &sensor1);

    printf("Enter reading from sensor 2: ");
    scanf("%d", &sensor2);

    printf("Enter reading from sensor 3: ");
    scanf("%d", &sensor3);

    sum = sensor1 + sensor2 + sensor3;
    difference = sensor1 - sensor2 - sensor3;

    printf("\nAddition of sensor readings = %d", sum);
    printf("\nSubtraction of sensor readings = %d", difference);

    getch();
}

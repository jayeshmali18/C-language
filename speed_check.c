#include <stdio.h>

void main()
{
    int speed;

    printf("Enter vehicle speed: ");
    scanf("%d", &speed);

    if(speed <= 60)
        printf("Speed is Safe");
    else
        printf("Speed is High");
}

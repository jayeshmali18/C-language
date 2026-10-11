#include <stdio.h>

void main()
{
    int battery;

    printf("Enter battery level: ");
    scanf("%d", &battery);

    if(battery >= 20)
    {
        printf("Robot Ready");
    }
    else
    {
        printf("Charge Battery");
    }
}

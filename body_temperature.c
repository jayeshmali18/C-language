#include <stdio.h>

void main()
{
    float temperature;

    clrscr();

    printf("Enter your temperature: ");
    scanf("%f", &temperature);

    if (temperature < 80)
    {
        printf("Patient Status: Normal");
    }
    else if (temperature <= 100 && temperature >= 80)
    {
        printf("Patient Status: Warning");
    }
    else
    {
        printf("Patient Status: Critical");
    }

    getch();
}

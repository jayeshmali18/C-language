#include <stdio.h>

void main()
{
    float moisture;

    clrscr();

    printf("Enter soil moisture: ");
    scanf("%f", &moisture);

    if (moisture < 30)
    {
        printf("Soil Status: Dry - Turn ON Water Pump");
    }
    else if (moisture <= 70 && moisture >= 30)
    {
        printf("Soil Status: Moist - Water Level Normal");
    }
    else
    {
        printf("Soil Status: Wet - Turn OFF Water Pump");
    }

    getch();
}

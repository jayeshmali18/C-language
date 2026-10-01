#include<stdio.h>
void main()
{
    int units, rate, bill;

    clrscr();

    printf("Enter electricity units: ");
    scanf("%d", &units);

    printf("Enter rate per unit: ");
    scanf("%d", &rate);

    bill = units * rate;

    printf("\nElectricity Units = %d", units);
    printf("\nRate per Unit = %d", rate);
    printf("\nTotal Bill = %d", bill);

    getch();

}

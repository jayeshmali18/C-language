#include<stdio.h>

void main()
{
    float item1, item2, item3, total;

    printf("Enter price of item 1: ");
    scanf("%f", &item1);

    printf("Enter price of item 2: ");
    scanf("%f", &item2);

    printf("Enter price of item 3: ");
    scanf("%f", &item3);

    total = item1 + item2 + item3;

    printf("Total Bill = %.2f", total);
    getch();
}

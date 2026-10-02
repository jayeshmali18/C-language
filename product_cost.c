#include<stdio.h>

void main()
{
    int price, quantity, total;

    clrscr();

    printf("Enter product price: ");
    scanf("%d", &price);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("Total Price = %d", total);

    getch();
}

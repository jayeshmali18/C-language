#include<stdio.h>

void main()
{
    int salary, bonus, total;

    clrscr();

    printf("Enter salary: ");
    scanf("%d", &salary);

    printf("Enter bonus: ");
    scanf("%d", &bonus);

    total = salary + bonus;

    printf("Total Salary = %d", total);

    getch();
}
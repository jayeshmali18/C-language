#include<stdio.h>

void main()
{
    char name[20];
    int age;

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Student Name: %s", name);
    printf("\nAge: %d", age);

    getch();
}

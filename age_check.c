#include <stdio.h>

void main()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if(age >= 18)
        printf("Eligible to Vote");
    else
        printf("Not Eligible to Vote");
}
